#include"header.h"

void show(sll*p)
{
    if(p==0)
    {
        printf("No records present\n");
        return;
    }

    while(p)
    {
        printf("%d %s %f\n",p->rollno,p->name,p->percentage);
        p=p->next;
    }
}
