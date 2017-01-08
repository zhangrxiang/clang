//
// Created by zhangrxiang on 2017/1/8 18:53.
// Location Wuxi
//


//C 库函数 char *strcat(char *dest, const char *src)
// 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。

#include <string.h>
#include <stdio.h>

int strcat_main(){
    char dst[20];
    char src[20];
    strcpy(dst, "zing like ");
    strcpy(src, "hly");

    strcat(dst, src);
    printf("%s",dst);
}


