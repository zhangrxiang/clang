//
// Created by zhang on 2017/1/4.
//


//C 库函数 void isdigit(int c) 检查所传的字符是否是十进制数字字符。
//十进制数字是：0 1 2 3 4 5 6 7 8 9
//如果 c 是一个数字，则该函数返回非零值，否则返回 0。


#include <stdio.h>
#include <ctype.h>


int isdigit_main()
{
    int var1 = 'h';
    int var2 = '2';

    if( isdigit(var1) )
    {
        printf("var1 = |%c| isdigit\n", var1 );
    }
    else
    {
        printf("var1 = |%c| not isdigit\n", var1 );
    }
    if( isdigit(var2) )
    {
        printf("var2 = |%c| isdigit\n", var2 );
    }
    else
    {
        printf("var2 = |%c| not isdigit\n", var2 );
    }
}