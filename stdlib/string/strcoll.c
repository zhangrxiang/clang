//
// Created by zhangrxiang on 2017/1/9 23:39.
//

//C 库函数 int strcoll(const char *str1, const char *str2)
// 把 str1 和 str2 进行比较，结果取决于 LC_COLLATE 的位置设置

#include <stdio.h>
#include <string.h>

int strcoll_main () {
    char str1[15];
    char str2[15];
    int ret;

    strcpy(str1, "abc");
    strcpy(str2, "ABC");

    ret = strcoll(str1, str2);
//    tr1 < str2

    if (ret > 0) {
        printf("str1 < str2");
    } else if (ret < 0) {
        printf("str2 < str1");
    } else {
        printf("str1 == str2");
    }

}