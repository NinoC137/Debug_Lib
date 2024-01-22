//
// Created by Yoshi on 2024/1/22.
//

#include "N_CmdString_debug.h"
#include "N_List_Entry.h"

debug_variable_t variable_list = {
        .node.next = &variable_list.node,
        .node.prev = &variable_list.node
};

debug_cmd_t cmd_list = {
        .node.next = &cmd_list.node,
        .node.prev = &cmd_list.node
};

const char *type_string[12] = {
        "int8",
        "uint8",
        "int16",
        "uint16",
        "int32",
        "uint32",
        "int64",
        "uint64",
        "float",
        "double",
        "char",
        "string"
};

#define itemtovar(x) ((debug_variable_t*)(x))
#define itemtocmd(x) ((debug_cmd_t*)(x))

static inline char *stringPassSpace(char *str) {
    while ((*str == ' ')) {
        ++str;
    }
    return str;
}

char *getStringField(char *dst, char *src) {
    int i = 0;
    src = stringPassSpace(src);
    for (; (src[i] != '\0') && (src[i] != ' '); i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';

    if (src[i] == ' ') {
        src = stringPassSpace(src + i);
    } else {
        src = src + i;
    }
    return src;
}

DebugError_t N_debug_addVariable(debug_variable_t *var) {
    list_add(&(var->node), &variable_list.node);
    if (variable_list.node.next != ((void *) 0)) {
        return OK;
    } else {
        return ERROR_OVF;
    }
}

DebugError_t N_debug_addCMD(debug_cmd_t *cmd) {
    list_add(&(cmd->node), &cmd_list.node);
    if (cmd_list.node.next != ((void *) 0)) {
        return OK;
    } else {
        return ERROR_OVF;
    }
}

static void set_value(void *pdata, char *value, datatype_t type) {
    switch (type) {
        case DATATYPE_INT8:
            *((int8_t *) pdata) = (int8_t) N_format._StringToInt(value);
            break;
        case DATATYPE_UINT8:
            *((uint8_t *) pdata) = (uint8_t) N_format._DecStringToUint(value);
            break;
        case DATATYPE_INT16:
            *((int16_t *) pdata) = (int16_t) N_format._StringToInt(value);
            break;
        case DATATYPE_UINT16:
            *((uint16_t *) pdata) = (uint16_t) N_format._DecStringToUint(value);
            break;
        case DATATYPE_INT32:
            *((int32_t *) pdata) = (int32_t) N_format._StringToInt(value);
            break;
        case DATATYPE_UINT32:
            *((uint32_t *) pdata) = (uint32_t) N_format._DecStringToUint(value);
            break;
        case DATATYPE_FLOAT:
            *((float *) pdata) = (float) N_format._StringToFloat(value);
            break;
        case DATATYPE_DOUBLE:
            *((double *) pdata) = (float) N_format._StringToFloat(value);
            break;
        case DATATYPE_STRING:
            strcpy(pdata, value);
            break;
        default:
            break;
    }
}

static DebugError_t debug_set_handler(char *input) {
    char buf[32];
    debug_variable_t *struct_ptr;

    input = getStringField(buf, input);

    list_for_each_entry(struct_ptr, &variable_list.node, node) {
        if (strcmp(itemtovar(struct_ptr)->name, buf) == 0) {
            input = getStringField(buf, input);
            set_value(itemtovar(struct_ptr)->pData, buf, itemtovar(struct_ptr)->type);
            break;
        }
    }

    return OK;
}

static DebugError_t debug_command_handler(char *input) {
    char buf[32];
    debug_cmd_t *struct_ptr;

    input = getStringField(buf, input);

    list_for_each_entry(struct_ptr, &cmd_list.node, node) {
        if (strcmp(itemtovar(struct_ptr)->name, buf) == 0) {
            input = getStringField(buf, input);
            struct_ptr->handlerFunc(buf);
            break;
        }
    }

    return OK;
}

DebugError_t N_debug_handler(char *input) {
    char buf[32];
    DebugError_t ret = OK;
    input = getStringField(buf, input);

    if (strcmp(buf, "SET") == 0) {
        debug_set_handler(input);
    } else if (strcmp(buf, "CMD") == 0) {
        debug_command_handler(input);
    } else {
        ret = ERROR_NOMATCH;
    }

    return ret;
}