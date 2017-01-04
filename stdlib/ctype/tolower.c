//
// Created by zhang on 2017/1/4.
//

//C 库函数 int tolower(int c) 把给定的字母转换为小写字母。

//如果 c 有相对应的小写字母，则该函数返回 c 的小写字母，否则 c 保持不变。返回值是一个可被隐式转换为 char 类型的 int .
#include <stdio.h>
#include <ctype.h>

int tolower_main()
{
    int i = 0;
    char c;
    char str[] = "W3CSCHOOL TUTORIALS";

    while( str[i] )
    {
        putchar(tolower(str[i]));
        i++;
    }

    return(0);
}