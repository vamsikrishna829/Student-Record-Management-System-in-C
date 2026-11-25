#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
}sll;

void add(sll**);
void show(sll*);
void rev(sll**);
void sort(sll*);
void del(sll**);
void del_all(sll**);
void modify(sll*);
void save(sll*);
void EXIT(sll**);
