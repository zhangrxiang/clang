#include <stdio.h>
#include <memory.h>

//
// Created by zhang on 2016/12/30.
//
int main11(){
//指针是一个特殊的变量，它里面存储的数值被解释成为内存里的一个地址。
//指针的类型，指针所指向的 类型，指针的值或者叫指针所指向的内存区，还有指针本身所占据的内存区

//1.指针的类型。
//(1)int *ptr; //指针的类型是int *
    int ii = 10;
    int *ptr;
    ptr = &ii;
    typeof(ptr) i = ptr;
    printf("%p\n",i);
    printf("%p\n",ptr);
    printf("%p\n",&ii);
//(2)char *ptr; //指针的类型是char *
//(3)int **ptr; //指针的类型是 int **
//(4)int (*ptr)[3]; //指针的类型是 int(*)[3]
//(5)int *(*ptr)[4]; //指针的类型是 int *(*)[4]


//    2.指针所指向的类型。
//    (1)int *ptr; //指针所指向的类型是int
//    (2)char *ptr; //指针所指向的的类型是char
//    (3)int **ptr; //指针所指向的的类型是 int *
//    (4)int (*ptr)[3]; //指针所指向的的类型是 int()[3]
//    (5)int *(*ptr)[4]; //指针所指向的的类型是 int *()[4]


//    3. 指针的值，或者叫指针所指向的内存区或地址。


    char a[20] = {'a','b','c','d'};
    char *pc = a;
    char *pc2 = a;
    pc++;
    printf("%c\n",*pc);
    while (*pc2 != '\0'){
        printf("%c\n",*pc2);
        pc2++;
    }
    printf("%lu\n",strlen(a));
    int i1 = 0;
    for (; i1 < strlen(a); ++i1) {
        printf("%c----%d\n",a[i1],a[i1]);
    }

    int iArr[12] = {10, 20, 30, 40, 60};
    int *pInt = iArr;
    printf("%p --- %d\n",pInt,*pInt);
    printf("%p --- %d\n",++pInt,*pInt);
    printf("%p --- %d\n",++pInt,*pInt);
    printf("%p --- %d\n",++pInt,*pInt);
//    printf("%d\n",*(++pInt));
//    printf("%d\n",*++pInt);
//    printf("%d\n",*++pInt);

    int iint = 12;
    int *pInt1 = &iint;
    printf("%d\n",*pInt1);
    printf("%d\n",iint);
    *pInt1 = 14;
    int **ppInt = &pInt1;
    printf("%d\n",*pInt1);
    printf("%d\n",iint);
    printf("%d\n",**ppInt);

    **ppInt = 16;
    printf("%d\n",*pInt1);
    printf("%d\n",iint);
    printf("%d\n",**ppInt);

//    指针表达式

    printf("%d\n",iArr[0]);
    printf("%d\n",*iArr);
    printf("%d\n",*(iArr+1));
    printf("%d\n",*(iArr+2));
    printf("-->%d\n", sizeof(iArr));





}