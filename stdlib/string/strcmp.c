//
// Created by zhangrxiang on 2017/1/8 19:06.
// Location Wuxi
//

//C 库函数 int strcmp(const char *str1, const char *str2)
// 把 str1 所指向的字符串和 str2 所指向的字符串进行比较。
//如果返回值 < 0，则表示 str1 小于 str2。
//如果返回值 > 0，则表示 str2 小于 str1。
//如果返回值 = 0，则表示 str1 等于 str2。


#include <string.h>
#include <stdio.h>

int strcmp_main(){
    char str1[15];
    char str2[15];
    int ret;


    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");

    ret = strcmp(str1, str2);
    if(ret > 0){
        printf("str1 > str2");
    } else if (ret < 0){
        printf("str1 < str2");
    } else{
        printf("str1v == str2");
    }
}