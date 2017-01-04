//
// Created by zhang on 2017/1/4.
//

//C 库函数 int isprint(int c) 检查所传的字符是否是可打印的。可打印字符是非控制字符的字符。

//如果 c 是一个可打印的字符，则该函数返回非零值（true），否则返回 0（false）。
#include <stdio.h>
#include <ctype.h>

int isprint_main()
{
    int var1 = 'k';
    int var2 = '8';
    int var3 = '\t';
    int var4 = ' ';

    if( isprint(var1) )
    {
        printf("var1 = |%c| isprint\n", var1 );
    }
    else
    {
        printf("var1 = |%c| not isprint\n", var1 );
    }
    if( isprint(var2) )
    {
        printf("var2 = |%c| isprint\n", var2 );
    }
    else
    {
        printf("var2 = |%c| not isprint\n", var2 );
    }
    if( isprint(var3) )
    {
        printf("var3 = |%c| isprint\n", var3 );
    }
    else
    {
        printf("var3 = |%c| not isprint\n", var3 );
    }
    if( isprint(var4) )
    {
        printf("var4 = |%c| isprint\n", var4 );
    }
    else
    {
        printf("var4 = |%c| not isprint\n", var4 );
    }

    return(0);
}