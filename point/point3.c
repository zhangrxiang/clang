//
// Created by zhang on 2016/12/31.
//


#include <stdio.h>

int main(){
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    int i = 0;
    int * pi = a;
    for (; i < 10; ++i) {
        printf("%d\n",a[i]);
    }
    printf("%d\n",*pi);
    printf("%d\n",*(pi+1));
    printf("%d\n",*pi);
}