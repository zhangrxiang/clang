//
// Created by zhang on 2016/12/28.
//

#include <stdio.h>
#include "mymath.h"
#include "array/array.h"


int tt(){
//    a) 一个整型数（An integer）
    int a1; // An integer

//    b)一个指向整型数的指针（ A pointer to an integer）
    int *a2; // A pointer to an integer

//    c)一个指向指针的的指针，它指向的指针是指向一个整型数（ A pointer to a pointer to an intege）r
    int **a3; // A pointer to a pointer to an integer

//    d)一个有10个整型数的数组（ An array of 10 integers）
    int a4[10]; // An array of 10 integers

//    e) 一个有10个指针的数组，该指针是指向一个整型数的。（An array of 10 pointers to integers）
    int *a5[10]; // An array of 10 pointers to integers

//    f) 一个指向有10个整型数数组的指针（ A pointer to an array of 10 integers）
    int (*a6)[10]; // A pointer to an array of 10 integers
//    g) 一个指向函数的指针，该函数有一个整型参数并返回一个整型数（A pointer to a function that takes an integer as an argument and returns an integer）
    int (*a7)(int); // A pointer to a function a that takes an integer argument and returns an integer
//    h) 一个有10个指针的数组，该指针指向一个函数，该函数有一个整型参数并返回一个整型数 （ An array of ten pointers to functions that take an integer argument and return an integer ）
    int (*a8[10])(int); // An array of 10 pointers to functions that take an integer argument and return an integer
}
int main2(){

//    printf("HelloWorld\n");
//    int sum = add(1,2);
//    printf("sum is %d",sum);
//    test();
//    get_score();
//    char_array();
    fun_array();
}