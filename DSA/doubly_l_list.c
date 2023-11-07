#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void insert_at_start();
void insert_at_end();
void random_insert();
void display();

struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head;

int main()
{
    int x;
    while(1)
    {
        printf("Linked list operations \n \n");
        printf("Enter the operation you want to perform: \n");
        printf("1) Insert : At start. \n2) Insert: At end. \n3) Insert anywhere \n4) Display list \n5) Exit \n");
        scanf("%d", &x);
        switch(x)
        {
            case 1: insert_at_start();
            break;
            case 2: insert_at_end();
            break;
            case 3: random_insert();
            break;
            case 4: display();
            break;
            case 5: exit(1);
            break;
            default: printf("Error! Wrong Choice. \n");
        }
        sleep(1);
    }
    return 0;
}

void insert_at_start()
{
    struct node *ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));

    if(ptr == NULL)
    {
        printf("Overflow! List is full\n\n");
    }
    else
    {
        printf("Enter the number you want to insert: \n");
        scanf("%d", &item);

        if(head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        printf("Node Insterted. \n");
    }
}

void insert_at_end()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));

    if(ptr == NULL)
    {
        printf("Overflow! List is full \n\n");
    }
    else
    {
        printf("Enter the number you want to insert: \n");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
    }
    printf("Node Inserted. \n");
}

void random_insert()
{
    struct node *ptr, *temp;
    int item, loc, i;
    ptr = (struct node*)malloc(sizeof(struct node));

    if(ptr == NULL)
    {
        printf("Overflow! List is full \n\n");
    }
    else
    {
        temp = head;
        printf("Enter the location after which you want to insert: \n");
        scanf("%d", &loc);
        for(i = 0; i < loc; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("Cannot be inserted. \n");
                return;
            }
        }
        printf("Enter the element you want to insert: \n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = temp->next;
        ptr->prev =  temp;
        temp->next = ptr;
        temp->next->prev = ptr;
        printf("Node Inserted. \n");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print. \n\n");
    }
    else
    {
        printf("Printing values in linked-list: [");
        while(ptr != NULL)
        {
            printf(" %d ", ptr->data);
            ptr = ptr->next;
        }
    printf("] \n");
    }
    sleep(1);
}