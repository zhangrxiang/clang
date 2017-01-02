//
// Created by zhang on 2017/1/1.
//



#include <stdio.h>
#include <memory.h>

typedef int INT;
typedef int * PINT;
typedef struct Person PERSON;
typedef union Student STUDENT;
typedef INT INTT;
struct Person{
    int id;
    char name[20];
};
union Student{
    int id;
    char name[20];
};
int typedef_main(){
    INT anInt = 10;
    PINT pint = &anInt;
    printf("%d\n",anInt);
    printf("%d\n",*pint);
    PERSON person;
    person.id = 11;
    strcpy(person.name,"zing");
    printf("id -> %d\n",person.id);
    printf("name -> %s\n",person.name);

    STUDENT student;
    student.id = 12;
    printf("id -> %d\n",student.id);
    strcpy(student.name,"zhangrxiang");
    printf("name -> %s\n",student.name);

    INTT ii = 14;
    printf("%d\n",ii);
}

