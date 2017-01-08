//
// Created by zhang on 2017/1/7.
//

//C 库函数 void *memcpy(void *str1, const void *str2, size_t n) 从存储区 str2 复制 n 个字符到存储区 str1。
//该函数返回一个指向目标存储区 str1 的指针。

#include <stdio.h>
#include <string.h>

int memcpy_main ()
{
    const char src[150] = "http://www.runoob.com/cprogramming/c-function-memcpy.html";
    char dest[150] = "";
    char dest2[150] = "";

    printf("Before memcpy dest = %s\n", dest);
    memcpy(dest, src, strlen(src)+1);
    printf("After memcpy dest = %s\n", dest);

    printf("%d\n",strlen(dest2));
    memcpy(dest2,src,strlen(src)-50);
    printf("After memcpy dest2 = %s\n", dest2);

}