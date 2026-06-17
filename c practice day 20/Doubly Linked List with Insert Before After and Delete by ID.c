#include <stdio.h>
#include <stdlib.h>

struct student
{
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

/* Create Sample List */
void createSampleList()
{
    int ids[] = {101, 102, 103, 104, 105};
    int maths[] = {80, 85, 90, 75, 88};
    int science[] = {78, 82, 95, 70, 91};

    struct student *newnode, *temp = NULL;

    for (int i = 0; i < 5; i++)
    {
        newnode = (struct student *)malloc(sizeof(struct student));

        newnode->id = ids[i];
        newnode->Maths = maths[i];
        newnode->Science = science[i];
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
}

/* Display List */
void displayList()
{
    struct student *temp = head;

    if (head == NULL)
    {
        printf("\nList is Empty!\n");
        return;
    }

    printf("\nStudent Records\n");
    printf("----------------------------------\n");

    while (temp != NULL)
    {
        printf("ID:%d  Maths:%d  Science:%d\n",
               temp->id,
               temp->Maths,
               temp->Science);

        temp = temp->next;
    }
}

/* Insert Entry */
void insertEntry()
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
    newnode->prev = NULL;

    printf("\n1. Insert Before ID");
    printf("\n2. Insert After ID");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    printf("Enter Target ID: ");
    scanf("%d", &targetID);

    struct student *temp = head;

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

    if (choice == 1)
    {
        newnode->next = temp;
        newnode->prev = temp->prev;

        if (temp->prev != NULL)
            temp->prev->next = newnode;
        else
            head = newnode;

        temp->prev = newnode;

        printf("Inserted Before ID %d\n", targetID);
    }
    else if (choice == 2)
    {
        newnode->prev = temp;
        newnode->next = temp->next;

        if (temp->next != NULL)
            temp->next->prev = newnode;

        temp->next = newnode;

        printf("Inserted After ID %d\n", targetID);
    }
    else
    {
        printf("Invalid Choice!\n");
        free(newnode);
    }
}

/* Delete Entry */
void deleteEntry()
{
    int targetID;

    printf("Enter ID to Delete: ");
    scanf("%d", &targetID);

    struct student *temp = head;

    while (temp != NULL && temp->id != targetID)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("ID Not Found!\n");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);

    printf("ID %d Deleted Successfully\n", targetID);
}

/* Main Function */
int main()
{
    int choice;

    createSampleList();

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertEntry();
            break;

        case 2:
            deleteEntry();
            break;

        case 3:
            displayList();
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
