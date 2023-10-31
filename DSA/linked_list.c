#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void display();
void insert_at_start();
void insert_at_end();
void random_insert();

struct node
{
    int data;
    struct node *next; //pointer to the next node
};
struct node *head;

int main()
{
    int x;
    while(1)
    {
        printf("Linked list operations \n \n");
        printf("Enter the operation you want to perform: \n");
        printf("1) Insert : At start. \n2) Insert: At end. \n3) Insert anywhere \n4) Display list \n5) Exit\n");
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
    int num;
    ptr = (struct node*)malloc(sizeof(struct node*));
    
    if(ptr == NULL)
    {
        printf("Overflow!! List is full \n \n");
    }
    else
    {
        printf("Enter the element you want to insert: \n");
        scanf("%d", &num);
        ptr->data = num;
        ptr->next = head;
        head = ptr;
        printf("Node inserted.\n");
        sleep(1);
    }

}

void insert_at_end()
{
    struct node *ptr, *temp;
    int num;
    ptr = (struct node*)malloc(sizeof(struct node*));

    if(ptr == NULL)
    {
        printf("Overflow!! List is full \n \n");
    }
    else
    {
        printf("Enter the element you want to insert: \n");
        scanf("%d", &num);
        ptr->data = num;
        if(head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Node inserted.\n");
            sleep(1);
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node inserted.\n");
            sleep(1);
        }
        
    }

}

void random_insert()
{
    int i, loc, num;
    struct node *ptr, *temp;
    ptr = (struct node*)malloc(sizeof(struct node*));

    if(ptr == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Node inserted.\n");
            sleep(1);
        }
    else
    {
        printf("Enter the element you want to insert: \n");
        scanf("%d", &num);
        ptr->data = num;
        printf("Enter the location after which you want to insert it: \n");
        scanf("%d", &loc);
        temp = head;

        for(i = 0; i < loc; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("Cannot be inserted.");
                free(ptr);
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("Node inserted.\n");        
        sleep(1);    
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print. /n/n");
    }
    else
    {
        printf("Printing values in linked-list: [");
        while(ptr != NULL)
        {
            printf(" %d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("] \n");
    sleep(1);
}