//
// Created by Yoshi on 2024/1/22.
//

#include "N_formatString.h"

static inline int StringToInt(const char *str);

static inline unsigned int DecStringToUint(const char *str);

static inline unsigned int HexStringToUint(const char *str);

static inline float StringToFloat(const char *str);

static inline int IntToDecString(int value, char *str);

static inline int UintToHexString(unsigned int value, char *str);

static inline int FloatToString(float value, char *str, int precision);

N_format_t N_format = {
        ._StringToInt = StringToInt,
        ._StringToFloat = StringToFloat,
        ._DecStringToUint = DecStringToUint,
        ._HexStringToUint = HexStringToUint,
        ._IntToDecString = IntToDecString,
        ._UintToHexString = UintToHexString,
        ._FloatToString = FloatToString
};

static inline char CharFormatTolower(char ch) {
    char ret = ch;
    if (ch > 'A' && ch < 'Z') {
        ret = ch & (0x20); //set b6 to 1
    }
    return ret;
}

static inline int StringToInt(const char *str) {
    int ret = 0, int_num = 0;
    int negativeFlag = 0;

    if (*str == '-') {
        negativeFlag = 1;
        ++str;
    }

    for (int i = 0; (str[i] != '\0'); i++) {
        ++int_num;
    }
    for (int j = 0; j < int_num; j++) {
        ret *= 10;
        ret += str[j] - '0';
    }

    return (negativeFlag) ? (0 - ret) : (ret);
}

static inline unsigned int DecStringToUint(const char *str) {
    int ret = 0, int_num = 0;

    for (int i = 0; (str[i] != '\0'); i++) {
        ++ret;
    }
    for (int j = 0; j < ret; j++) {
        ret *= 10;
        ret += str[j] - '0';
    }

    return ret;
}

static inline unsigned int HexStringToUint(const char *str) {
    unsigned int ret = 0;
    unsigned int uint_temp = 0;
    char ch;

    if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X')) {
        str += 2;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            uint_temp = str[i] - '0';
        } else if ((ch = CharFormatTolower(str[i])) >= 'a' && ch <= 'f') {
            uint_temp = ch - 'a' + 10;
        } else break;

        ret <<= 4;  //hex to dec
        ret |= uint_temp;
    }

    return ret;
}

static inline float StringToFloat(const char *str) {
    float ret = 0;
    float float_tmp = 0;
    int int_tmp = 0, int_num = 0, float_num = 0;
    int i = 0, negativeFlag = 0;

    if (*str == '-') {
        negativeFlag = 1;
        ++str;
    }

    for (; (str[i] != '.' && str[i] != '\0'); i++) {
        ++int_num;
    }
    for (int j = 0; j < int_num; j++) {
        int_tmp *= 10;
        int_tmp += str[j] - '0';
    }

    str += i;
    if (*str == '\0') {
        float_tmp = 0;
    } else {
        ++str;
        for (i = 0; str[i] != '\0'; i++) {
            ++float_num;
        }
        for (; float_num > 0; --float_num) {
            float_tmp += (float) (str[float_num - 1] - '0');
            float_tmp /= 10.0f;
        }
    }

    ret = (float) int_tmp + float_tmp;

    return (negativeFlag) ? (0.0f - ret) : (ret);
}

static inline int IntToDecString(int value, char *str) {
    int i = 0;
    int num = 0, ret = 0;
    char swap_ch;

    if (value < 0) {
        *str = '-';
        ++str;
        ret = 1;
        value = 0 - value;
    } else if (value == 0) {
        *str = '0';
        num++;
    }
    while (value) {
        str[i++] = (value % 10) + '0';
        value /= 10;
        ++num;
    }

    for (int j = 0; j + j <= num - 1; j++) {
        swap_ch = str[j];
        str[j] = str[num - 1 - j];
        str[num - 1 - j] = swap_ch;
    }

    str[i] = '\0';

    return ret + num;
}

static inline int UintToHexString(unsigned int value, char *str) {
    int i = 0;
    int num = 0, ret = 0;
    char swap_ch;

    while (value) {
        str[i++] = ((value & 0x0000000f) > 9) ? (value & 0x0000000f) + 'a' - 10 : (value & 0x0000000f) + '0';
        value >>= 4;
        ++num;
    }

    for (int j = 0; j + j <= num - 1; j++) {
        swap_ch = str[j];
        str[j] = str[num - 1 - j];
        str[num - 1 - j] = swap_ch;
    }

    str[i] = '\0';
    return ret + num;
}

static inline int FloatToString(float value, char *str, int precision) {
    int num = 0, tmp = 0, float_num = 0;

    if (value < 0) {
        *str = '-';
        ++str, ++num;
        value = 0 - value;
    }

    tmp = (int) value;
    tmp = IntToDecString(tmp, str);
    if (tmp == 0) {
        *(str++) = '0';
    }

    str += tmp;
    *(str++) = '.';

    value -= (int) value;
    float_num = precision;

    for (int i = 0; i < float_num; i++) {
        value *= 10;
    }

    tmp = (int) value;
    tmp = IntToDecString(tmp, str);
    str += tmp;
    tmp = float_num - tmp;
    for (int i = 1; i < float_num - tmp + 1; i++) {
        *(str + tmp - i) = *(str - i);
    }
    float_num = float_num - tmp;
    for (int i = 0; i < tmp; i++) {
        *(str - float_num + i) = '0';
    }
    return precision + num + 1;
}
