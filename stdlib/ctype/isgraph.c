//
// Created by zhang on 2017/1/4.
//

//C 库函数 void isgraph(int c) 检查所传的字符是否有图形表示法。
//带有图形表示法的字符是除了空白字符（比如 ' '）以外的所有可打印的字符。

//如果 c 有图形表示法，则该函数返回非零值，否则返回 0。

#include <stdio.h>
#include <ctype.h>

int isgraph_main()
{
    int var1 = '3';
    int var2 = 'm';
    int var3 = ' ';

    if( isgraph(var1) )
    {
        printf("var1 = |%c| isgraph\n", var1 );
    }
    else
    {
        printf("var1 = |%c|  not isgraph\n", var1 );
    }
    if( isgraph(var2) )
    {
        printf("var2 = |%c| isgraph\n", var2 );
    }
    else
    {
        printf("var2 = |%c|  not isgraph\n", var2 );
    }
    if( isgraph(var3) )
    {
        printf("var3 = |%c| isgraph\n", var3 );
    }
    else
    {
        printf("var3 = |%c| not isgraph\n", var3 );
    }

    return(0);
}