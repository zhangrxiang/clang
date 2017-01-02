//
// Created by zhang on 2017/1/2.
//

#include <stdio.h>
#include <time.h>

int main(){

    FILE *fp;
    printf(__FILE__"\n");
    printf(__DATE__"\n");
    fp = fopen("E:\\ClionProjects\\clang\\file\\test.txt", "w");
    int i = 0;

    while (i<100){
        fputs(__DATE__" "__TIME__"\n",fp);
        i++;
    }
//    fprintf(fp, "This is testing for fprintf...\n");
//    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

//    r	打开一个已有的文本文件，允许读取文件。
//    w	打开一个文本文件，允许写入文件。
// 如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。
//    a	打开一个文本文件，以追加模式写入文件。
// 如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
//    r+	打开一个文本文件，允许读写文件。
//    w+	打开一个文本文件，允许读写文件。
// 如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
//    a+	打开一个文本文件，允许读写文件。
// 如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。



}

