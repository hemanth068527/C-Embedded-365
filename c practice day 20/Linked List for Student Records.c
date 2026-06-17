#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main()
{
    struct student *head = NULL, *temp = NULL, *newnode = NULL;
    int id;

    while (1)
    {
        printf("Enter ID: ");
        scanf("%d", &id);

        if (id == -1)
            break;

        newnode = (struct student *)malloc(sizeof(struct student));

        newnode->id = id;

        printf("Enter Maths Mark: ");
        scanf("%d", &newnode->Maths);

        printf("Enter Science Mark: ");
        scanf("%d", &newnode->Science);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("\nStudent Records:\n");
    printf("-------------------------------\n");

    temp = head;

    while (temp != NULL)
    {
        printf("ID: %d\tMaths: %d\tScience: %d\n",
               temp->id,
               temp->Maths,
               temp->Science);

        temp = temp->next;
    }

    return 0;
}
