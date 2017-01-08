//
// Created by zhang on 2017/1/2.
//

//#define	定义宏
#define NUM 1
//#include	包含一个源代码文件
#include <stdio.h>
#include "math.h"
//#undef	取消已定义的宏
#undef NUM
//#ifdef	如果宏已经定义，则返回真
#ifdef NUM
NUM = 2
#endif
//#ifndef	如果宏没有定义，则返回真
#ifndef NUM
#define NUM 10
#endif
//#if	如果给定条件为真，则编译下面代码
#if NUM > 10
#elif NUM >5
#elif NUM > 1
#endif
//#else	#if 的替代方案
//#elif	如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码
//#endif	结束一个 #if……#else 条件编译块
//#error	当遇到标准错误时，输出错误消息
//#pragma	使用标准化方法，向编译器发布特殊的命令到编译器中


//预处理器运算符
//宏延续运算符（\）
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
//字符串常量化运算符（#）
//在宏定义中，当需要把一个宏的参数转换为字符串常量时，则使用字符串常量化运算符（#）。
// 在宏中使用的该运算符有一个特定的参数或参数列表。例如


//标记粘贴运算符（##）
//宏定义内的标记粘贴运算符（##）会合并两个参数。它允许在宏定义中两个独立的标记被合并为一个标记。例如：
#define tokenpaster(n) printf ("token" #n " = %d", token##n)
#define token(a) printf ("token" #a " = %d", token##a)

#define MAX(x,y) (x>y?x:y)
//预定义宏
//__DATE__	当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
//__TIME__	当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
//__FILE__	这会包含当前文件名，一个字符串常量。
//__LINE__	这会包含当前行号，一个十进制常量。
//__STDC__	当编译器以 ANSI 标准编译时，则定义为 1。
int pre_main() {
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
    message_for(1,2);
    message_for("zing","monkey");
    message_for(monkey,zing);
    int token34 = 40;
    tokenpaster(34);
    token(34);//fuck
    printf("\n");
    int i = MAX(2, 3);
    printf("MAX(%d,%d) is %d\n",2,3,i);
    return 0;
}