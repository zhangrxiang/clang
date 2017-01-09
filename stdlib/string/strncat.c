//
// Created by zhangrxiang on 2017/1/8 19:10.
// Location Wuxi
//


//C 库函数 char *strncat(char *dest, const char *src, size_t n)
// 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止。

#include <stdio.h>
#include <string.h>

int strncat_main ()
{
    char src[50], dest[50];

    strcpy(src,  "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

//    |This is destinationThis is source|
    printf("|%s|", dest);
}