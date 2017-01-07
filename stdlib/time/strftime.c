//
// Created by zhang on 2017/1/7.
//


//C 库函数 size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr)
//根据 format 中定义的格式化规则，格式化结构 timeptr 表示的时间，并把它存储在 str 中。
//str -- 这是指向目标数组的指针，用来复制产生的 C 字符串。
//maxsize -- 这是被复制到 str 的最大字符数。
//format -- 这是 C 字符串，包含了普通字符和特殊格式说明符的任何组合。
// 这些格式说明符由函数替换为表示 tm 中所指定时间的相对应值。格式说明符是：

#include <stdio.h>
#include <time.h>

int strftime_main ()
{
    time_t rawtime;
    struct tm *info;
    char buffer[80];

    time( &rawtime );

    info = localtime( &rawtime );

    strftime(buffer,80,"%A %B %Y-%m-%j - %I:%M:%S %p", info);
    printf("format time :|- %s -|\n", buffer );

}
//%a	缩写的星期几名称	Sun
//%A	完整的星期几名称	Sunday
//%b	缩写的月份名称	Mar
//%B	完整的月份名称	March
//%c	日期和时间表示法	Sun Aug 19 02:56:02 2012
//%d	一月中的第几天（01-31）	19
//%H	24 小时格式的小时（00-23）	14
//%I	12 小时格式的小时（01-12）	05
//%j	一年中的第几天（001-366）	231
//%m	十进制数表示的月份（01-12）	08
//%M	分（00-59）	55
//%p	AM 或 PM 名称	PM
//%S	秒（00-61）	02
//%U	一年中的第几周，以第一个星期日作为第一周的第一天（00-53）	33
//%w	十进制数表示的星期几，星期日表示为 0（0-6）	4
//%W	一年中的第几周，以第一个星期一作为第一周的第一天（00-53）	34
//%x	日期表示法	08/19/12
//%X	时间表示法	02:50:06
//%y	年份，最后两个数字（00-99）	01
//%Y	年份	2012
//%Z	时区的名称或缩写	CDT
//%%	一个 % 符号	%
