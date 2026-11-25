#include"header.h"

void save(sll *p)
{
    FILE *fp = fopen("student.txt", "w");

    if(fp == 0)
    {
        printf("File opening failed\n");
        return;
    }

    while(p)
    {
        fprintf(fp, "%d %s %f\n",p->rollno, p->name, p->percentage);

        p = p->next;
    }

    fclose(fp);

    printf("Student records saved successfully\n");
}
