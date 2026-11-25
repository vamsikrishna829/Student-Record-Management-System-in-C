#include"header.h"

void modify(sll*p)
{
    sll *t=p;
    int c=0,num;
    float perc,change;
    char name[20],modify[20];

    printf("-------------------------------------------------------------------------------\n");
    printf("Enter which record to search for modification:\n");
    printf("R/r : Search by roll number\n");
    printf("N/n : Search by name\n");
    printf("P/p : Search by percentage\n");

    char op;
    scanf(" %c",&op);

    printf("-------------------------------------------------------------------------------\n");

    switch(op)
    {
        case 'r':
        case 'R':
            t=p;
            printf("enter which rollno data you want to modify\n");
            scanf("%d",&num);

            while(t)
            {
                if(t->rollno==num)
                {
                    printf("enter modified name and percentage\n");
                    scanf(" %[^\n] %f",modify,&perc);
                    strcpy(t->name,modify);
                    t->percentage=perc;
                    return;
                }
                t=t->next;
            }

            printf("rollno is not found\n");
            break;

        case 'n':
        case 'N':
            printf("enter which name you want to modify\n");
            scanf(" %[^\n]",name);

            while(t)
            {
                if(strcmp(t->name,name)==0)
                    c++;
                t=t->next;
            }

            t=p;

            if(c==0)
            {
                printf("no matched records found\n");
                return;
            }

            if(c==1)
            {
                while(t)
                {
                    if(strcmp(t->name,name)==0)
                    {
                        printf("enter replaced name\n");
                        scanf(" %[^\n]",modify);
                        strcpy(t->name,modify);
                        printf("modification successful\n");
                        return;
                    }
                    t=t->next;
                }
            }

            t=p;

            if(c!=1)
            {
                while(t)
                {
                    if(strcmp(t->name,name)==0)
                        printf("%d %s %f",t->rollno,t->name,t->percentage);
                    t=t->next;
                }

                t=p;
                printf("enter which rollno's name you want to modify\n");
                scanf("%d",&num);

                while(t)
                {
                    if(t->rollno==num)
                    {
                        printf("enter replaced name\n");
                        scanf(" %[^\n]",modify);
                        strcpy(t->name,modify);
                        printf("modification successful\n");
                        return;
                    }
                    t=t->next;
                }
            }
            break;

        case 'P':
        case 'p':
            t=p,c=0;
            printf("enter percantage you want to modify\n");
            scanf("%f",&perc);

            while(t)
            {
                if(t->percentage==perc)
                    c++;
                t=t->next;
            }

            if(c==0)
            {
                printf("No records found\n");
                return;
            }

            t=p;

            if(c==1)
            {
                while(t)
                {
                    if(t->percentage==perc)
                    {
                        printf("enter your modified percentage\n");
                        scanf("%f",&change);
                        t->percentage=change;
                        return;
                    }
                    t=t->next;
                }
            }

            t=p;

            if(c!=1)
            {
                while(t)
                {
                    if(t->percentage==perc)
                        printf("%d %s %f",t->rollno,t->name,t->percentage);
                    t=t->next;
                }

                t=p;
                printf("enter which rollno you want to modify\n");
                scanf("%d",&num);

                while(t)
                {
                    if(t->rollno==num)
                    {
                        printf("enter your modified percentage\n");
                        scanf("%f",&change);
                        t->percentage=change;
                        return;
                    }
                    t=t->next;
                }
            }
            break;

        default:
            printf("Invalid option\n");
    }
}
