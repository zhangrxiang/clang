//
// Created by zhangrxiang on 2017/1/9 23:43.
//

//C 库函数 size_t strcspn(const char *str1, const char *str2)
// 检索字符串 str1 开头连续有几个字符都不含字符串 str2 中的字符。

//该函数返回 str1 开头连续都不含字符串 str2 中字符的字符数。

#include <stdio.h>
#include <string.h>


int strcspn_main ()
{
    int len;
    const char str1[] = "ABCDEF4960910";
    const char str2[] = "013";

    len = strcspn(str1, str2);

//    10
    printf("%d\n", len + 1);

    return(0);
}