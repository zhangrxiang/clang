#include <stdio.h>


//指针（Pointer）是C语言中的一类数据类型的统称。这种类型的数据专门用来存储和表示内存单元的编号，以实现通过地址得以完成的各种运算。

//指针数据类型和数组、结构体、联合体等一样，也是一种派生数据类型（Derived Types）。

//指向数据对象的指针（Object Pointer）、指向函数的指针（Function Pointer）、指向虚无的指针（“void *”类型）

//数据对象

//（1）是内存中一段定长的、以byte为基本单位的连续区域。
//（2）这段内存区域中的内容表示具有某种类型的一个数据。
#define ZS 2520      //总数
#define ZRS 6        //总人数

//求甲把自己桔子分给乙之前两人桔子的数目
void qiufqsm(int *p_jia , int * p_yi , const int n );

void swap(int *a ,int *b);
void print(){
    printf("*************************************************************\n");
}
int main1(){
    int i = 1;
    double d = 1.0000;
    char c = 'a';

    int* pi = &i;
    int *pi2 = 0;
    print();
    printf("pi2 : %p\n",pi2);
    pi2 = &i;
    printf("pi2 : %p\n",pi2);
    printf("&i : %p\n",&i);
    print();
    printf("i before value : %d\n",i);
    *pi = 2;
    printf("i after value : %d\n",i);
    print();

    printf("pi: %p\n",pi);
    printf("pi point value : %d\n",*pi);

    printf("%d\n", sizeof(i)); //4
    printf("%d\n", sizeof(d)); //8
    printf("%d\n", sizeof(c)); //1

    printf("sizeof &d %d\n", sizeof(&d)); //4
    printf("&d %p\n", &d); //0061FF00

    printf("%lf\n", d); //value
    printf("%c\n", c); //value

    /************************************************************
            * 父亲将2520个桔子分给六个儿子。
            * 分完后父亲说："老大将分给你的桔子的1/8分给老二
            * ** 老二拿到后连同原先的桔子分1/7给老三
            * ** 老三拿到后连同原先的桔子分1/6给老四
            * ** 老四拿到后连同原先的桔子分1/5给老五
            * ** 老五拿到后连同原先的桔子分1/4给老六
            * ** 老六拿到后连同原先的桔子分1/3给老大"。
            * * 在分桔子的过程中并不存在分得分数个桔子的情形，
            * 结果大家手中的桔子正好一样多。问六兄弟原来手中各有多少桔子。
    /**************************************************************/

    int l1sm,l2sm,l3sm,l4sm,l5sm,l6sm ;
    //最后每个人的桔子数
    l1sm = l2sm = l3sm = l4sm = l5sm = l6sm = ZS / ZRS ;

    //求老六分给老大前各自数目
    qiufqsm( &l6sm , &l1sm , 3 ) ;
    //逐步前推
    qiufqsm( &l5sm , &l6sm , 4 ) ;
    qiufqsm( &l4sm , &l5sm , 5 ) ;
    qiufqsm( &l3sm , &l4sm , 6 ) ;
    qiufqsm( &l2sm , &l3sm , 7 ) ;
    qiufqsm( &l1sm , &l2sm , 8 ) ;
    print();
    printf ("orange : %d,%d,%d,%d,%d,%d\n" , l1sm , l2sm , l3sm , l4sm , l5sm , l6sm);

    print();
    int aa = 12;
    int bb = 14;
    printf("before --->  aa=%d,bb=%d\n",aa,bb);
    swap(&aa,&bb);
    printf("after --->  aa=%d,bb=%d\n",aa,bb);
    print();

}

//求甲把自己桔子分给乙之前两人桔子的数目
void qiufqsm(int *p_jia , int * p_yi , const int n )
{
    int jiazqs ;//甲之前数
    jiazqs =   *p_jia * n / ( n - 1 )        ; //前后的差值
    * p_yi -=  ( jiazqs - *p_jia )         ; //乙之前的为减去差值
    *p_jia +=  ( jiazqs - *p_jia )         ; //甲之前的为加上差值
}

void swap(int *a ,int *b){
    int c = *a;
    *a = *b;
    *b = c;

}
