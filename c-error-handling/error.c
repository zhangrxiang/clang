//
// Created by zhang on 2017/1/3.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//extern int errno ;

int error_main() {
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        printf("卧槽-----wocao\n");
        errnum = errno;
        fprintf(stderr, "错误: %d\n", errno);
        perror("通过 perror 输出错误");
        fprintf(stderr, "打开文件错误: %s\n", strerror(errnum));
        printf("-------------------------------------------------\n");
        printf(errno+"\n");

    } else {
        fclose(pf);
    }


    int dividend = 20;
    int divisor = 0;
    int quotient;

    if(divisor == 0){
        fprintf(stderr, "除数为 0 退出运行...\n");
        exit(EXIT_SUCCESS);
//        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient 变量的值为 : %d\n", quotient );
    return 0;
}