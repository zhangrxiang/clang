//
// Created by zhang on 2017/1/7.
//

//C 库函数 time_t mktime(struct tm *timeptr) 把 timeptr 所指向的结构转换为一个依据本地时区的 time_t 值。

#include <time.h>
#include <stdio.h>

int mktime_main(){
    int ret;
    struct tm info;
    char buffer[80];

    info.tm_year = 2017 - 1900;
    info.tm_mon = 0;
    info.tm_mday = 7;
    info.tm_hour = 0;
    info.tm_min = 0;
    info.tm_sec = 1;
    info.tm_isdst = -1;

    ret = mktime(&info);
    if( ret == -1 )
    {
        printf("错误：不能使用 mktime 转换时间。\n");
    }
    else
    {
//        07/04/01 00:00:01
        strftime(buffer, sizeof(buffer), "%c", &info );
        printf(buffer);
    }
}