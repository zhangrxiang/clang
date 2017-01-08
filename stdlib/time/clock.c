//
// Created by zhang on 2017/1/5.
//

//C 库函数 clock_t clock(void) 返回程序执行起（一般为程序的开头），处理器时钟所使用的时间。为了获取 CPU 所使用的秒数，您需要除以 CLOCKS_PER_SEC。
//在 32 位系统中，CLOCKS_PER_SEC 等于 1000000，该函数大约每 72 分钟会返回相同的值。


//clock_t clock(void)
//该函数返回自程序启动起，处理器时钟所使用的时间。如果失败，则返回 -1 值。

#include <time.h>
#include <stdio.h>

int clock_main()
{
    clock_t start_t, end_t, total_t;
    int i;

    start_t = clock();
    printf("start......,start_t = %ld\n", start_t);

    printf("begin loop ,start_t = %ld\n", start_t);
    for(i=0; i< 50000000; i++)
    {
    }
    end_t = clock();
    printf("loop over , end_t = %ld\n", end_t);

    double total = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("CPU use time: %lf\n", total);
    printf("exit...\n");

    return(0);
}