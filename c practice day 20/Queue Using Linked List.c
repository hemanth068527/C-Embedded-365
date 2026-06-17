#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *front = NULL;
struct student *rear = NULL;

/* Add (Enqueue) */
void add()
{
    struct student *newnode;

    newnode = (struct student *)malloc(sizeof(struct student));

    printf("Enter ID: ");
    scanf("%d", &newnode->id);

    printf("Enter Maths Mark: ");
    scanf("%d", &newnode->Maths);

    printf("Enter Science Mark: ");
    scanf("%d", &newnode->Science);

    newnode->next = NULL;

    if (front == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    printf("Record Added Successfully!\n");
}

/* Remove (Dequeue) */
void removeEntry()
{
    struct student *temp;

    if (front == NULL)
    {
        printf("Queue Underflow!\n");
        return;
    }

    temp = front;

    printf("\nRemoved Record:\n");
    printf("ID      : %d\n", temp->id);
    printf("Maths   : %d\n", temp->Maths);
    printf("Science : %d\n", temp->Science);

    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    free(temp);
}

/* Display Queue */
void display()
{
    struct student *temp;

    if (front == NULL)
    {
        printf("Queue is Empty!\n");
        return;
    }

    printf("\nQueue (Front to Rear)\n");
    printf("--------------------------\n");

    temp = front;

    while (temp != NULL)
    {
        printf("ID:%d  Maths:%d  Science:%d\n",
               temp->id,
               temp->Maths,
               temp->Science);

        temp = temp->next;
    }
}

/* Main Function */
int main()
{
    int choice;

    do
    {
        printf("\n===== QUEUE MENU =====\n");
        printf("1. Add\n");
        printf("2. Remove\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            removeEntry();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
