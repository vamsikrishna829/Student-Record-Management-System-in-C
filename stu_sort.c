#include"header.h"

void sort(sll*p)
{
    sll *p1=p,*p2,temp;
    sll *t=p;
    char op;
    int c=0,i,j;

    printf("-------------------------------------------------------------------------------\n");
    printf("N/n)Sort with name \nP/p)Sort with percentage\nenter your option\n");
    scanf(" %c",&op);
    printf("-------------------------------------------------------------------------------\n");

    switch(op)
    {
        case 'N':
        case 'n':
            while(t)
            {
                c++;
                t=t->next;
            }

            for(i=0;i<c-1;i++)
            {
                p2=p1->next;

                for(j=0;j<c-1-i;j++)
                {
                    if(strcmp(p1->name,p2->name)>0)
                    {
                        temp.rollno=p1->rollno;
                        strcpy(temp.name,p1->name);
                        temp.percentage=p1->percentage;

                        p1->rollno=p2->rollno;
                        strcpy(p1->name,p2->name);
                        p1->percentage=p2->percentage;

                        p2->rollno=temp.rollno;
                        strcpy(p2->name,temp.name);
                        p2->percentage=temp.percentage;
                    }
                    p2=p2->next;
                }
                p1=p1->next;
            }

            printf("sorting based on name done successfully\n");
            break;

        case 'P':
        case 'p':
            p1=t=p,c=0;

            while(t)
            {
                c++;
                t=t->next;
            }

            for(i=0;i<c-1;i++)
            {
                p2=p1->next;

                for(j=0;j<c-1-i;j++)
                {
                    if(p1->percentage<p2->percentage)
                    {
                        temp.rollno=p1->rollno;
                        strcpy(temp.name,p1->name);
                        temp.percentage=p1->percentage;

                        p1->rollno=p2->rollno;
                        strcpy(p1->name,p2->name);
                        p1->percentage=p2->percentage;

                        p2->rollno=temp.rollno;
                        strcpy(p2->name,temp.name);
                        p2->percentage=temp.percentage;
                    }
                    p2=p2->next;
                }
                p1=p1->next;
            }

            printf("sorting based on marks done successfully\n");
            break;

        default:
            printf("Invalid choice\n");
    }
}
