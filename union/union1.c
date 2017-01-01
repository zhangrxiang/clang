//
// Created by zhang on 2017/1/1.
//

//union [union tag]
//{
//    member definition;
//    member definition;
//    ...
//    member definition;
//} [one or more union variables];


#include <memory.h>
#include <stdio.h>
//共用体
int union_main(){
    union Data{
        int i;
        float f;
        char c[20];
    }datas;
    union Data data;
    data.i = 1;
    printf("%d\n",data.i);
    data.f = 10L;
    printf("%lf\n",data.f);
    strcpy(data.c,"zing");
    printf("%s\n",data.c);
    datas.i = 11;
    printf("%d\n",datas.i);
    datas.f = 12L;
    printf("%f\n",datas.f);
    strcpy(datas.c,"Hello World");
    printf("%s\n",datas.c);
}