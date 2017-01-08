//
// Created by zhang on 2017/1/4.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//1	void *calloc(int num, int size);
//该函数分配一个带有 num 个元素的数组，每个元素的大小为 size 字节。
//2	void free(void *address);
//该函数释放 address 所指向的h内存块。
//3	void *malloc(int num);
//该函数分配一个 num 字节的数组，并把它们进行初始化。
//4	void *realloc(void *address, int newsize);
//该函数重新分配内存，把内存扩展到 newsize。
int me_main()
{
    char name[100];
    char *description;

    int arr[10] = {11,22,33,44,55,66,77,88,99};
    int *pArr;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
//    该函数分配一个 num 字节的数组，并把它们进行初始化。
    description = malloc( 200 * sizeof(char) );
    if( description == NULL )
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy( description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name );
    printf("Description: %s\n", description );

//    1	void *calloc(int num, int size);
//    该函数分配一个带有 num 个元素的数组，每个元素的大小为 size 字节。
    pArr = calloc(15, sizeof(int));
    pArr = arr;
    int i ;
    for ( i = 0; i < 12; ++i) {
        printf("%d\n",*(pArr+i));
    }

    free(pArr);
    printf("%d\n",*pArr);
}