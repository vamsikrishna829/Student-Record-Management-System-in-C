#include"header.h"

void EXIT(sll **p)
{
    char ch;

    printf("S/s : Save and Exit");
    printf("\nE/e : Exit Without Saving");
    printf("\nEnter your choice: \n");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 's':
        case 'S':
            save(*p);
            exit(0);

        case 'e':
        case 'E':
            exit(0);

        default:
            printf("Invalid choice\n");
            break;
    }
}
