//
// Created by zhang on 2017/1/4.
//

//C 库函数 int isspace(int c) 检查所传的字符是否是空白字符。
//' '   (0x20)	space (SPC) 空格符
//'\t'	(0x09)	horizontal tab (TAB) 水平制表符
//'\n'	(0x0a)	newline (LF) 换行符
//'\v'	(0x0b)	vertical tab (VT) 垂直制表符
//'\f'	(0x0c)	feed (FF) 换页符
//'\r'	(0x0d)	carriage return (CR) 回车符

//如果 c 是一个空白字符，则该函数返回非零值（true），否则返回 0（false）。
//

#include <stdio.h>
#include <ctype.h>

int isspace_main()
{
    int var1 = 't';
    int var2 = '1';
    int var3 = ' ';
    int var4 = '\t';

    if( isspace(var1) )
    {
        printf("var1 = |%c| isspace\n", var1 );
    }
    else
    {
        printf("var1 = |%c| not isspace\n", var1 );
    }
    if( isspace(var2) )
    {
        printf("var2 = |%c| isspace\n", var2 );
    }
    else
    {
        printf("var2 = |%c| not isspace\n", var2 );
    }
    if( isspace(var3) )
    {
        printf("var3 = |%c| isspace\n", var3 );
    }
    else
    {
        printf("var3 = |%c| not isspace\n", var3 );
    }
    if( isspace(var4) )
    {
        printf("var4 = |%c| isspace\n", var4 );
    }
    else
    {
        printf("var4 = |%c| not isspace\n", var4 );
    }

    return(0);
}