//
// Created by zhang on 2017/1/5.
//

#include <stdio.h>
#include <limits.h>

int limits_main(){
//    下面的值是特定实现的，且是通过 #define 指令来定义的，这些值都不得低于下边所给出的值。
//    CHAR_BIT	8	定义一个字节的比特数。
    printf("CHAR_BIT : %d\n",CHAR_BIT);
//    SCHAR_MIN	-128	定义一个有符号字符的最小值。
    printf("SCHAR_MIN : %d\n",SCHAR_MIN);
//    SCHAR_MAX	127	定义一个有符号字符的最大值。
    printf("SCHAR_MAX : %d\n",SCHAR_MAX);
//    UCHAR_MAX	255	定义一个无符号字符的最大值。
    printf("UCHAR_MAX : %d\n",UCHAR_MAX);
//    CHAR_MIN	0	定义类型 char 的最小值，如果 char 表示负值，则它的值等于 SCHAR_MIN，否则等于 0。
//    CHAR_MAX	127	定义类型 char 的最大值，如果 char 表示负值，则它的值等于 SCHAR_MAX，否则等于 UCHAR_MAX。
//    MB_LEN_MAX	1	定义多字节字符中的最大字节数。
//    SHRT_MIN	-32768	定义一个短整型的最小值。
//    SHRT_MAX	+32767	定义一个短整型的最大值。
//    USHRT_MAX	65535	定义一个无符号短整型的最大值。
//    INT_MIN	-32768	定义一个整型的最小值。
//    INT_MAX	+32767	定义一个整型的最大值。
//    UINT_MAX	65535	定义一个无符号整型的最大值。
//    LONG_MIN	-2147483648	定义一个长整型的最小值。
    printf("LONG_MIN : %ld\n",LONG_MIN);
//    LONG_MAX	+2147483647	定义一个长整型的最大值。
    printf("LONG_MAX : %lu\n",LONG_MAX);
//    ULONG_MAX	4294967295	定义一个无符号长整型的最大值。
    printf("ULONG_MAX : %lu\n",ULONG_MAX);
}