//
// Created by Yoshi on 2024/1/22.
//

#ifndef N_CMDSTRING_DEBUG_H
#define N_CMDSTRING_DEBUG_H

#include "string.h"
#include "stdio.h"

#include "N_List_Entry.h"
#include "N_formatString.h"

typedef enum{
    DATATYPE_INT8,
    DATATYPE_UINT8,
    DATATYPE_INT16,
    DATATYPE_UINT16,
    DATATYPE_INT32,
    DATATYPE_UINT32,
    DATATYPE_FLOAT,
    DATATYPE_DOUBLE,
    DATATYPE_STRING
}datatype_t;

typedef enum{
    OK,
    ERROR_OVF,
    ERROR_CONFLICT,
    ERROR_NOMATCH
}DebugError_t;

typedef void (*N_debugFunc_t)(void *);

struct N_debug_variable{
    list_t node;

    const char* name;
    datatype_t type;

    void * pData;
};

struct N_debug_cmd{
    list_t node;

    const char* name;
    N_debugFunc_t handlerFunc;
};

typedef struct N_debug_variable debug_variable_t;
typedef struct N_debug_cmd debug_cmd_t;

char * getStringField(char* dst, char* src);

DebugError_t N_debug_addVariable(debug_variable_t *var);
DebugError_t N_debug_addCMD(debug_cmd_t *cmd);
DebugError_t N_debug_handler(char* input);

#endif
