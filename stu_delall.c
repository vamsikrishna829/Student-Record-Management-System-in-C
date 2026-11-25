#include"header.h"

void del_all(sll**p)
{
    sll *del=*p;
    while(del)
    {
        *p=del->next;
        free(del);
        del=*p;
    }
    printf("Deletion done successfully\n");
}
