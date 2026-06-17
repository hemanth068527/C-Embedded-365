#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void createSampleList()
{
    int ids[] = {101, 102, 103, 104, 105};
    int maths[] = {80, 85, 90, 75, 88};
    int science[] = {78, 82, 95, 70, 91};

    struct student *temp, *newnode;

    for (int i = 0; i < 5; i++)
    {
        newnode = (struct student *)malloc(sizeof(struct student));

        newnode->id = ids[i];
        newnode->Maths = maths[i];
        newnode->Science = science[i];
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
}

void displayList()
{
    struct student *temp = head;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    printf("\nStudent Records:\n");
    printf("-----------------------------------\n");

    while (temp != NULL)
    {
        printf("ID:%d  Maths:%d  Science:%d\n",
               temp->id,
               temp->Maths,
               temp->Science);

        temp = temp->next;
    }
}

void insertNode()
{
    int choice, targetID;

    struct student *newnode =
        (struct student *)malloc(sizeof(struct student));

    printf("Enter New ID: ");
    scanf("%d", &newnode->id);

    printf("Enter Maths Mark: ");
    scanf("%d", &newnode->Maths);

    printf("Enter Science Mark: ");
    scanf("%d", &newnode->Science);

    newnode->next = NULL;

    printf("\n1. Insert Before ID\n");
    printf("2. Insert After ID\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter Target ID: ");
    scanf("%d", &targetID);

    struct student *temp = head;
    struct student *prev = NULL;

    if (choice == 1) // Insert Before
    {
        while (temp != NULL && temp->id != targetID)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
        {
            printf("ID Not Found!\n");
            free(newnode);
            return;
        }

        if (prev == NULL)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            prev->next = newnode;
            newnode->next = temp;
        }

        printf("Node Inserted Before %d\n", targetID);
    }
    else if (choice == 2) // Insert After
    {
        while (temp != NULL && temp->id != targetID)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            printf("ID Not Found!\n");
            free(newnode);
            return;
        }

        newnode->next = temp->next;
        temp->next = newnode;

        printf("Node Inserted After %d\n", targetID);
    }
    else
    {
        printf("Invalid Choice!\n");
        free(newnode);
    }
}

int main()
{
    int option;

    createSampleList();

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Insert Entry\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            insertNode();
            break;

        case 2:
            displayList();
            break;

        case 3:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (option != 3);

    return 0;
}
