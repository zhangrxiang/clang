//
// Created by zhangrxiang on 2017/1/9 23:40.
//

//C 库函数 char *strcpy(char *dest, const char *src)
// 把 src 所指向的字符串复制到 dest。

#include <stdio.h>
#include <string.h>

int strcpy_main()
{
    char src[40];
    char dest[100];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "This is w3cschool.cc");
    strcpy(dest, src);

//    This is w3cschool.cc
    printf("%s\n", dest);

    return(0);
}