//
// Created by zhang on 2017/1/4.
//


//如果 c 是一个小写字母，则该函数返回非零值（true），否则返回 0（false）。
#include <stdio.h>
#include <ctype.h>

int islower_main()
{
    int var1 = 'Q';
    int var2 = 'q';
    int var3 = '3';

    if( islower(var1) )
    {
        printf("var1 = |%c| islower\n", var1 );
    }
    else
    {
        printf("var1 = |%c| not islower\n", var1 );
    }
    if( islower(var2) )
    {
        printf("var2 = |%c| islower\n", var2 );
    }
    else
    {
        printf("var2 = |%c| not islower\n", var2 );
    }
    if( islower(var3) )
    {
        printf("var3 = |%c| islower\n", var3 );
    }
    else
    {
        printf("var3 = |%c| not islower\n", var3 );
    }
}