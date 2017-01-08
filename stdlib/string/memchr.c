//
// Created by zhang on 2017/1/7.
//

//C 库函数 void *memchr(const void *str, int c, size_t n)
// 在参数 str 所指向的字符串的前 n 个字节中搜索第一次出现字符 c（一个无符号字符）的位置。

#include <stdio.h>
#include <string.h>

int memchr_main ()
{
    const char str[] = "https://github.com/zhangrxiang";
    const char ch = '.';
    char *ret;

    ret = memchr(str, ch, strlen(str));

    printf("|%c| after string is - |%s|\n", ch, ret);

    return(0);
}