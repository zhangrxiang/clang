//
// Created by zhang on 2016/12/31.
//

//struct [structure tag]
//{
//    member definition;
//    member definition;
//    ...
//    member definition;
//} [one or more structure variables];

#include <memory.h>
#include <stdio.h>

struct Student{
    int id;
    char name[10];
    int age;
};

struct Student structStu(struct Student student,struct Student student2);

void structArgus(struct Student student);

void structPoint(struct Student *pStudent);

int main(){
    struct Student student,student2;
    struct Student *ps,*ps2;
    ps = &student;
    ps2 = &student2;

    struct Student s = structStu(student,student2);

    structArgus(s);
    structPoint(ps);
    structArgus(student);
}

void structPoint(struct Student *pStudent) {
    pStudent->id = 3;
    strcpy(pStudent->name,"zing");
    pStudent->age = 23;
}

void structArgus(struct Student student) {
    printf("s id : %d\n",student.id);
    printf("s name : %s\n",student.name);
    printf("s age : %d\n",student.age);
}

struct Student structStu(struct Student student,struct Student student2) {
    student.id = 1;
    strcpy(student.name,"zhangrxiang");
    student.age = 22;

    student2.id = 2;
    strcpy(student2.name,"houlingyan");
    student2.age = 21;

    printf("s id : %d\n",student.id);
    printf("s name : %s\n",student.name);
    printf("s age : %d\n",student.age);

    printf("s2 id : %d\n",student2.id);
    printf("s2 name : %s\n",student2.name);
    printf("s2 age : %d\n",student2.age);
    return student;
}