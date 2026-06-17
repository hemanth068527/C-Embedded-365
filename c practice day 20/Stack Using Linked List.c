#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

/* Push Operation */
void push()
{
    struct student *newnode;

    newnode = (struct student *)malloc(sizeof(struct student));

    printf("Enter ID: ");
    scanf("%d", &newnode->id);

    printf("Enter Maths Mark: ");
    scanf("%d", &newnode->Maths);

    printf("Enter Science Mark: ");
    scanf("%d", &newnode->Science);

    newnode->next = top;
    top = newnode;

    printf("Record Pushed Successfully!\n");
}

/* Pop Operation */
void pop()
{
    struct student *temp;

    if (top == NULL)
    {
        printf("Stack Underflow!\n");
        return;
    }

    temp = top;

    printf("\nPopped Record:\n");
    printf("ID: %d\n", temp->id);
    printf("Maths: %d\n", temp->Maths);
    printf("Science: %d\n", temp->Science);

    top = top->next;

    free(temp);
}

/* Display Stack */
void display()
{
    struct student *temp;

    if (top == NULL)
    {
        printf("Stack is Empty!\n");
        return;
    }

    printf("\nStack (Top to Bottom)\n");
    printf("-----------------------\n");

    temp = top;

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
        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
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
