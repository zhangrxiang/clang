//
// Created by zhangrxiang on 2017/1/8.
//


//C 库函数 void *memset(void *str, int c, size_t n)
// 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。

#include <stdio.h>
#include <string.h>

int memset_main() {
    char str[50];

    strcpy(str, "This is string.h library function");
    puts(str);

    memset(str, '$', 7);
    memset(str, 'zing', 2);

    puts(str);
}
