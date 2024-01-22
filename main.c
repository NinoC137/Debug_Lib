#include <stdio.h>

#include "N_CmdString_debug.h"

void cmdFunction(void* argument){
    printf("here is test function.\r\n");
    printf("Received argument: %s\r\n", (char*)argument);
}

int main(void) {
    int a = 0;
    int b = 200;
    int PWM_Compare = 500;
    float f = 0;
    char char_buf[100];

    debug_variable_t va =
            {
                    .name = "a",
                    .pData = &a,
                    .type = DATATYPE_INT32
            };
    debug_variable_t vb =
            {
                    .name = "b",
                    .pData = &b,
                    .type = DATATYPE_INT32
            };
    debug_variable_t cmp =
            {
                    .name = "cmp",
                    .pData = &PWM_Compare,
                    .type = DATATYPE_INT16
            };
    debug_variable_t vf =
            {
                    .name = "f",
                    .pData = &f,
                    .type = DATATYPE_FLOAT
            };
    debug_cmd_t cmd = {
            .name = "cmd",
            .handlerFunc = cmdFunction,
    };

    N_debug_addVariable(&va);
    N_debug_addVariable(&vb);
    N_debug_addVariable(&vf);
    N_debug_addVariable(&cmp);

    N_debug_addCMD(&cmd);

    printf("before:\n");
    printf("a:%d\t b:%d\t cmp:%d\t f:%0.2f\r\n", a, b, PWM_Compare, f);

    N_debug_handler("SET a 100");
    N_debug_handler("SET b 1000");
    N_debug_handler("SET cmp 3456");
    N_debug_handler("SET f 0.2");

    N_debug_handler("CMD cmd helloNino");

    printf("after:\n");
    printf("a:%d\t b:%d\t cmp:%d\t f:%0.2f\r\n", a, b, PWM_Compare, f);

    return 0;
}
