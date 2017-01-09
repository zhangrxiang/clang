//
// Created by zhangrxiang on 2017/1/9 23:37.
//

//C 库函数 int strncmp(const char *str1, const char *str2, size_t n)
// 把 str1 和 str2 进行比较，最多比较前 n 个字节。
//如果返回值 < 0，则表示 str1 小于 str2。
//如果返回值 > 0，则表示 str2 小于 str1。
//如果返回值 = 0，则表示 str1 等于 str2。
#include <stdio.h>
#include <string.h>

int strncmp_main ()
{
    char str1[15];
    char str2[15];
    int ret;


    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");

    ret = strncmp(str1, str2, 4);
//    str2 < str1
    if(ret < 0)
    {
        printf("str1 < str2");
    }
    else if(ret > 0)
    {
        printf("str2 < str1");
    }
    else
    {
        printf("str1 == str2");
    }

    return(0);
}