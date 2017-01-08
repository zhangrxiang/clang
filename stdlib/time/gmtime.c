//
// Created by zhang on 2017/1/7.
//


//C 库函数 struct tm *gmtime(const time_t *timer)
// 使用 timer 的值来填充 tm 结构，并用协调世界时（UTC）也被称为格林尼治标准时间（GMT）表示。

//struct tm *gmtime(const time_t *timer)
//    struct tm {
//        int tm_sec;         /* 秒，范围从 0 到 59				*/
//        int tm_min;         /* 分，范围从 0 到 59				*/
//        int tm_hour;        /* 小时，范围从 0 到 23				*/
//        int tm_mday;        /* 一月中的第几天，范围从 1 到 31	                */
//        int tm_mon;         /* 月份，范围从 0 到 11				*/
//        int tm_year;        /* 自 1900 起的年数				*/
//        int tm_wday;        /* 一周中的第几天，范围从 0 到 6		        */
//        int tm_yday;        /* 一年中的第几天，范围从 0 到 365	                */
//        int tm_isdst;       /* 夏令时						*/
//    };


#include <stdio.h>
#include <time.h>

#define BST (+1)
#define CCT (+8)

int gmtime_main() {

    time_t rawtime;
    struct tm *info;

    time(&rawtime);
    /* 获取 GMT 时间 */
    info = gmtime(&rawtime);

    printf("now world time: \n");
    printf("London: %2d:%02d\n", (info->tm_hour + BST) % 24, info->tm_min);
    printf("China: %2d:%02d\n", (info->tm_hour + CCT) % 24, info->tm_min);

    return (0);
}
