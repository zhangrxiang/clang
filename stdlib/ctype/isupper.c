//
// Created by zhang on 2017/1/4.
//

//如果 c 是一个大写字母，则该函数返回非零值（true），否则返回 0（false）。
#include <stdio.h>
#include <ctype.h>

int isupper_main()
{
    int var1 = 'M';
    int var2 = 'm';
    int var3 = '3';

    if( isupper(var1) )
    {
        printf("var1 = |%c| isupper\n", var1 );
    }
    else
    {
        printf("var1 = |%c| not isupper\n", var1 );
    }
    if( isupper(var2) )
    {
        printf("var2 = |%c| isupper\n", var2 );
    }
    else
    {
        printf("var2 = |%c| not isupper\n", var2 );
    }
    if( isupper(var3) )
    {
        printf("var3 = |%c| isupper\n", var3 );
    }
    else
    {
        printf("var3 = |%c| not isupper\n", var3 );
    }

    return(0);
}