#include"header.h"

void rev(sll**p)
{
    sll *t=*p;
    int c=0,i;

    while(t)
    {
        c++;
        t=t->next;
    }

    t=*p;

    if(c>1)
    {
        sll **a;
        a=malloc(sizeof(sll*)*c);

        for(i=0;i<c;i++)
        {
            a[i]=t;
            t=t->next;
        }

        for(i=c-1;i>0;i--)
            a[i]->next=a[i-1];

        a[0]->next=0;
        *p=a[c-1];
    }
    printf("reverse the list done successfully\n");
}
