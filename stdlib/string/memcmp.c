//
// Created by zhang on 2017/1/7.
//


//C 库函数 int memcmp(const void *str1, const void *str2, size_t n))
// 把存储区 str1 和存储区 str2 的前 n 个字节进行比
//如果返回值 < 0，则表示 str1 小于 str2。
//如果返回值 > 0，则表示 str2 小于 str1。
//如果返回值 = 0，则表示 str1 等于 str2。
#include <stdio.h>
#include <string.h>

int memcmp_main ()
{
    char str1[15];
    char str2[15];
    int ret;

    memcpy(str1, "abcdef", 6);
    memcpy(str2, "ABCDEF", 6);

    ret = memcmp(str1, str2, 5);

    if(ret > 0)
    {
        printf("str2 < str1"); //
    }
    else if(ret < 0)
    {
        printf("str1 > str2");
    }
    else
    {
        printf("str1 = str2");
    }

}