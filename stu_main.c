#include"header.h"

int main()
{
    sll *head=0;
    char op;

    while(1)
    {
        printf("-------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------\n");
        printf("****************STUDENT RECORD MENU*********************\n");
        printf("\n");
        printf(" a/A : Add new record\n d/D : Delete a record\n s/S : Show the list\n m/M : Modify a record\n v/V : Save records\n e/E : Exit\n t/T : Sort the list\n l/L : Delete all the records\n r/R : Reverse the list\n");
        printf("-------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------\n");
        printf("enter your choice\n");
        scanf(" %c",&op);

        switch(op)
        {
            case 'a':
            case 'A':add(&head);break;

            case 'd':
            case 'D':del(&head);break;

            case 's':
            case 'S':show(head);break;

            case 'm':
            case 'M':modify(head);break;

            case 'v':
            case 'V':save(head);break;

            case 'e':
            case 'E':EXIT(&head);break;

            case 't':
            case 'T':sort(head);break;

            case 'l':
            case 'L':del_all(&head);break;

            case 'r':
            case 'R':rev(&head);break;

            default:printf("INVALID CHOICE\n");
        }
    }
}
