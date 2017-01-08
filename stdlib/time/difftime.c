//
// Created by zhang on 2017/1/6.
//

//C 库函数 double difftime(time_t time1, time_t time2) 返回 time1 和 time2 之间相差的秒数 (time1 - time2)。
// 这两个时间是在日历时间中指定的，表示了自纪元 Epoch（协调世界时 UTC：1970-01-01 00:00:00）起经过的时间。

//double difftime(time_t time1, time_t time2)
#include <stdio.h>
#include <time.h>
int difftime_main ()
{
    time_t start_t, end_t;
    double diff_t;

    printf("start...\n");
    time(&start_t);

    printf("sleep...\n");

    time(&end_t);
    diff_t = difftime(end_t+1, start_t);

    printf("execute time = %f\n", diff_t);
    printf("exit...\n");

    return(0);
}