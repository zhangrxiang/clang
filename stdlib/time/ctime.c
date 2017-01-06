//
// Created by zhang on 2017/1/5.
//

//C 库函数 char *ctime(const time_t *timer) 返回一个表示当地时间的字符串，当地时间是基于参数 timer。
//返回的字符串格式如下： Www Mmm dd hh:mm:ss yyyy 其中，
// Www 表示星期几，
// Mmm 是以字母表示的月份，
// dd 表示一月中的第几天，
// hh:mm:ss 表示时间，
// yyyy 表示年份。

#include <time.h>
#include <stdio.h>

int ctime_main(){
    time_t curtime;
    time_t i = time(&curtime);
    printf("%ld\n",i/3600/24/365+1970);
    char *string = ctime(&i);
    puts(ctime(&i));
}