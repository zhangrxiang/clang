//
// Created by zhang on 2017/1/4.
//


//C 库函数 int isxdigit(int c)检查所传的字符是否是十六进制数字。。
//如果 c 是一个十六进制数字，则该函数返回非零值（true），否则返回 0（false）。

#include <stdio.h>
#include <ctype.h>

int isxdigit_main()
{
    char var1[] = "tuts";
    char var2[] = "0xE";

    if( isxdigit(var1[0]) )
    {
        printf("var1 = |%s| isxdigit\n", var1 );
    }
    else
    {
        printf("var1 = |%s| not isxdigit\n", var1 );
    }

    if( isxdigit(var2[0] ))
    {
        printf("var2 = |%s| isxdigit\n", var2 );
    }
    else
    {
        printf("var2 = |%s| not isxdigit\n", var2 );
    }

    return(0);
}