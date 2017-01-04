//
// Created by zhang on 2017/1/4.
//

//可用于测试和映射字符。

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int isalnum_main() {

    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';

//    如果 c 是一个数字或一个字母，则该函数返回非零值，否则返回 0。
    if (isalnum(var1)) {
        printf("var1 = |%c| isalnum\n", var1);
    } else {
        printf("var1 = |%c| not isalnum\n", var1);
    }
    if (isalnum(var2)) {
        printf("var2 = |%c| isalnum\n", var2);
    } else {
        printf("var2 = |%c| not isalnum\n", var2);
    }
    if (isalnum(var3)) {
        printf("var3 = |%c|  isalnum\n", var3);
    } else {
        printf("var3 = |%c| not isalnum\n", var3);
    }
    if (isalnum(var4)) {
        printf("var4 = |%c| isalnum\n", var4);
    } else {
        printf("var4 = |%c| not isalnum\n", var4);
    }

}


