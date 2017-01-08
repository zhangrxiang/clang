//
// Created by zhang on 2017/1/4.
//


//C 库函数 int ispunct(int c) 检查所传的字符是否是标点符号字符。标点符号字符可以是非字母数字（正如 isalnum 中的一样）的任意图形字符（正如 isgraph 中的一样）。

//如果 c 是一个标点符号字符，则该函数返回非零值（true），否则返回 0（false）。
#include <stdio.h>
#include <ctype.h>

int ispunct_main()
{
    int var1 = 't';
    int var2 = '1';
    int var3 = '/';
    int var4 = ' ';
    int var5 = ',';

    if( ispunct(var1) )
    {
        printf("var1 = |%c| ispunct\n", var1 );
    }
    else
    {
        printf("var1 = |%c| not ispunct\n", var1 );
    }
    if( ispunct(var2) )
    {
        printf("var2 = |%c| ispunct\n", var2 );
    }
    else
    {
        printf("var2 = |%c| not ispunct\n", var2 );
    }
    if( ispunct(var3) )
    {
        printf("var3 = |%c| ispunct\n", var3 );
    }
    else
    {
        printf("var3 = |%c| not ispunct\n", var3 );
    }
    if( ispunct(var4) )
    {
        printf("var4 = |%c| ispunct\n", var4 );
    }
    else
    {
        printf("var4 = |%c| not ispunct\n", var4 );
    }
    if( ispunct(var5) )
    {
        printf("var5 = |%c| ispunct\n", var5 );
    }
    else
    {
        printf("var5 = |%c| not ispunct\n", var5 );
    }
}