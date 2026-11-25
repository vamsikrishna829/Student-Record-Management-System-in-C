#include"header.h"

void add(sll **p)
{
    sll *new = malloc(sizeof(sll));
    int i, flag;

    new->next = 0;

    for(i = 1; ; i++)
    {
        flag = 0;
        sll *temp = *p;

        while(temp)
        {
            if(temp->rollno == i)
            {
                flag = 1;
                break;
            }
            temp = temp->next;
        }

        if(flag == 0)
            break;
    }

    new->rollno = i;
    printf("-------------------------------------------------------------------------------\n");

    printf("Enter student name and percentage\n");
    scanf(" %[^\n] %f", new->name, &new->percentage);
    printf("-------------------------------------------------------------------------------\n");

    if(*p == NULL || (*p)->rollno > new->rollno)
    {
        new->next = *p;
        *p = new;
    }
    else
    {
        sll *temp = *p;

        while(temp->next && temp->next->rollno < new->rollno)
            temp = temp->next;

        new->next = temp->next;
        temp->next = new;
    }

    printf("-------------------------------------------------------------------------------\n");
    printf("Record added successfully. Roll number = %d\n", i);
}
