//
// Created by zhang on 2017/1/4.
//

//如果 c 是一个字母，则该函数返回非零值，否则返回 0。

#include <stdio.h>
#include <ctype.h>

int isalpha_main()
{
    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';

    if( isalpha(var1) )
    {
        printf("var1 = |%c| isalpha\n", var1 );
    }
    else
    {
        printf("var1 = |%c| not isalpha\n", var1 );
    }
    if( isalpha(var2) )
    {
        printf("var2 = |%c| isalpha\n", var2 );
    }
    else
    {
        printf("var2 = |%c| not isalpha\n", var2 );
    }
    if( isalpha(var3) )
    {
        printf("var3 = |%c| isalpha\n", var3 );
    }
    else
    {
        printf("var3 = |%c| not isalpha\n", var3 );
    }
    if( isalpha(var4) )
    {
        printf("var4 = |%c| isalpha\n", var4 );
    }
    else
    {
        printf("var4 = |%c| not isalpha\n", var4 );
    }

    return(0);
}