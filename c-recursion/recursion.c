//
// Created by zhang on 2017/1/3.
//



#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int factorial(int num);
long fibonaci(int num);
double average(int num,...);

int re_main(){
    int num;
    char ch[100] = {'a','b','c','d','e','f','g'};
    int len = strlen(ch);
    printf("%d\n",len);
    printf("input a num\n");
    scanf("%d",&num);
    long fac = factorial(num);
    long fib = fibonaci(num);
    printf("factorial(%d) is %ld\n",num,fac);
    printf("fibonaci(%d) is %ld\n",num,fib);
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));

}

long fibonaci(int num) {
    if(num <= 2)
        return num;
    return fibonaci(num-1) + fibonaci(num-2);
}

int factorial(int num) {
    if(num <= 1)
        return 1;
    return num * factorial(num-1);
}


//在函数定义中创建一个 va_list 类型变量，该类型是在 stdarg.h 头文件中定义的。
//使用 int 参数和 va_start 宏来初始化 va_list 变量为一个参数列表。宏 va_start 是在 stdarg.h 头文件中定义的。
//使用 va_arg 宏和 va_list 变量来访问参数列表中的每个项。
//使用宏 va_end 来清理赋予 va_list 变量的内存。
double average(int num,...)
{

    va_list valist;
    double sum = 0.0;
    int i;

    /* 为 num 个参数初始化 valist */
    va_start(valist, num);

    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    /* 清理为 valist 保留的内存 */
    va_end(valist);

    return sum/num;
}

