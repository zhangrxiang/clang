//
// Created by zhang on 2017/1/2.
//

#include <stdio.h>
#include <memory.h>

#define TRUE  1
#define FALSE 0
#define ZING "zhangrxiang"
#define LENGTH strlen(ZING)

int define_main() {
    printf("Value of TRUE : %d\n", TRUE);
    printf("Value of FALSE : %d\n", FALSE);
    printf("name: %s\n", ZING);

    printf("%d\n",LENGTH);
    return 0;
}