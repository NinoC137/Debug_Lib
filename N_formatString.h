//
// Created by Yoshi on 2024/1/22.
//

#ifndef N_FORMATSTRING_H
#define N_FORMATSTRING_H

struct N_formatInterface {
    int (*_StringToInt)(const char *);

    unsigned int (*_DecStringToUint)(const char *);

    unsigned int (*_HexStringToUint)(const char *);

    float (*_StringToFloat)(const char *);

    int (*_IntToDecString)(int, char *);

    int (*_UintToHexString)(unsigned int, char *);

    int (*_FloatToString)(float, char *, int precision);
};

typedef struct N_formatInterface N_format_t;

extern N_format_t N_format;

#endif
