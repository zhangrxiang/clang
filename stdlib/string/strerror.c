//
// Created by zhangrxiang on 2017/1/9 23:44.
//

//C 库函数 char *strerror(int errnum)
// 从内部数组中搜索错误号 errnum，
// 并返回一个指向错误消息字符串的指针。strerror 生成的错误字符串取决于开发平台和编译器。

//errnum -- 错误号，通常是 errno。
//该函数返回一个指向错误字符串的指针，该错误字符串描述了错误 errnum。
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main ()
{
    FILE *fp;

    fp = fopen("file.txt","r");
    if( fp == NULL )
    {
//        Error: No such file or directory
        printf("Error: %s\n", strerror(errno));
    }

    return(0);
}