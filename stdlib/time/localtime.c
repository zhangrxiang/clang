//
// Created by zhang on 2017/1/7.
//

//C 库函数 struct tm *localtime(const time_t *timer) 使用 timer 的值来填充 tm 结构。timer 的值被分解为 tm 结构，并用本地时区表示。

//struct tm *localtime(const time_t *timer)

#include <stdio.h>
#include <time.h>

int main ()
{
    time_t rawtime;
    struct tm *info;
    char buffer[80];

    time( &rawtime );

    info = localtime( &rawtime );
    printf("now location time and date is: %s", asctime(info));
    return(0);
}