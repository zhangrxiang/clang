//
// Created by zhangrxiang on 2017/1/8 19:00.
// Location Wuxi
//

//C 库函数 char *strchr(const char *str, int c) 
// 在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。

#include <string.h>
#include <stdio.h>

int strchr_main(){
    char zing[20];
    strcpy(zing,"I like you");

    char *string = strchr(zing, ' ');
    printf("%s",string);
//    like you
//    该函数返回在字符串 str 中第一次出现字符 c 的位置，如果未找到该字符则返回 NULL。
}
