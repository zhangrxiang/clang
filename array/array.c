//
// Created by zhang on 2016/12/29.
//

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "array.h"
int fun_array(){
//    字符串长度函数strlen
//    字符串连接函数 strcat
//    字符串复制函数strcpy
//    字符串比较函数strcmp
    char str[]="C language";
    int len = (int) strlen(str);
    printf("The lenth of the string is %d\n", len);
}
int char_array(){
    int i;
    char str1[30] = "http://c.biancheng.net";
    char str2[] = "C Language";
    char str3[30] = "You are a good\0 boy!";
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
}
int get_score(){
    int i, j;  //二维数组下标
    int sum=0;  //当前科目的总成绩
    int average;  //总平均分
    int v[3];  //各科平均分
    int a[5][3];  //用来保存每个同学各科成绩的二维数组
    printf("Input score:\n");
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            scanf("%d", &a[j][i]);  //输入每个同学的各科成绩
            sum+=a[j][i];  //计算当前科目的总成绩
        }
        v[i]=sum/5;  // 当前科目的平均分
        sum=0;
    }
    average =(v[0]+v[1]+v[2])/3;
    printf("Math: %d\nC Languag: %d\nEnglish: %d\n", v[0], v[1], v[2]);
    printf("Total:%d\n", average);
}
int test(){
//    int a1=20, a2=345, a3=700, a4=22;
//    int b1=56720, b2=9999, b3=20098, b4=2;
//    int c1=233, c2=205, c3=1, c4=6666;
//    int d1=34, d2=0, d3=23, d4=23006783;
//    printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
//    printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
//    printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
//    printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);
//    int a[4] = {10, 2, 3, 4};
//    printf("%d\n",*a);
//    printf("%d\n",*(a+1));
//    printf("%d\n",*a + 1 );

    int a[6] = {299, 34, 92, 100};
    int b[6], i;
    //从控制台输入数据为每个元素赋值
    for(i=0; i<6; i++){
        scanf("%d", &b[i]);
    }
    //输出数组元素
    for(i=0; i<6; i++){
        printf("%d  ", a[i]);
    }
    putchar('\n');
    for(i=0; i<6; i++){
        printf("%d  ", b[i]);
    }
    putchar('\n');
}