#include "header.h"

void del(sll **p)
{
    sll *del = *p, *prev = NULL, *t = *p;
    int num, c = 0;
    char name[50], op;

    if (*p == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("--------------------------------------------------\n");
    printf("R/r) Delete based on rollno\n");
    printf("N/n) Delete based on name\n");
    printf("Enter your choice:\n");
    scanf(" %c", &op);

    printf("--------------------------------------------------\n");

    switch(op)
    {
        case 'R':
        case 'r':
            printf("Enter rollno number you want to delete\n");
            scanf("%d", &num);

            while(del)
            {
                if(del->rollno == num)
                {
                    if(del == *p)
                        *p = del->next;
                    else
                        prev->next = del->next;

                    free(del);
                    printf("Deletion completed\n");
                    return;
                }

                prev = del;
                del = del->next;
            }

            printf("Rollno is not found\n");
            break;

        case 'N':
        case 'n':
            printf("Enter name you want to delete\n");
            scanf(" %49[^\n]", name);

            while(t)
            {
                if(strcmp(name, t->name) == 0)
                    c++;

                t = t->next;
            }

            if(c == 0)
            {
                printf("No match found\n");
                return;
            }

            if(c == 1)
            {
                del = *p;
                prev = NULL;

                while(del)
                {
                    if(strcmp(del->name, name) == 0)
                    {
                        if(del == *p)
                            *p = del->next;
                        else
                            prev->next = del->next;

                        free(del);
                        printf("Deletion completed\n");
                        return;
                    }

                    prev = del;
                    del = del->next;
                }
            }

            if(c > 1)
            {
                t = *p;

                while(t)
                {
                    if(strcmp(t->name, name) == 0)
                        printf("%d %s %f\n",
                        t->rollno, t->name, t->percentage);

                    t = t->next;
                }

                printf("Enter rollno you want to delete\n");
                scanf("%d", &num);

                del = *p;
                prev = NULL;

                while(del)
                {
                    if(del->rollno == num &&
                       strcmp(del->name, name) == 0)
                    {
                        if(del == *p)
                            *p = del->next;
                        else
                            prev->next = del->next;

                        free(del);
                        printf("Deletion completed\n");
                        return;
                    }

                    prev = del;
                    del = del->next;
                }
            }

            printf("No match found\n");
            break;

        default:
            printf("Invalid choice\n");
    }
}
