//
// Created by zhang on 2017/1/7.
//

//C 库函数 time_t time(time_t *seconds)
// 返回自纪元 Epoch（1970-01-01 00:00:00 UTC）起经过的时间，以秒为单位。
// 如果 seconds 不为空，则返回值也存储在变量 seconds 中。
//time_t time(time_t *t)

#include <stdio.h>
#include <time.h>

int time_main ()
{
    time_t seconds;

    seconds = time(NULL);
    printf("form 1970-01-01 the count of TIME  = %ld\n", seconds/3600);
    printf("form 1970-01-01 the count of DAY  = %ld\n", seconds/3600/24);

    return(0);
}