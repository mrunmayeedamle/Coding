#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void insert_at_start();
void insert_at_end();
void random_insert();
void delete_at_start();
void delete_at_end();
void random_delete();
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
        printf("1) Insert : At start. \n2) Insert: At end. \n3) Insert anywhere \n4) Delete a node at the start \n");
        printf("5) Delete node at the end \n6) Delete node randomly \n7) Display list \n8) Exit \n");
        scanf("%d", &x);
        switch(x)
        {
            case 1: insert_at_start();
            break;
            case 2: insert_at_end();
            break;
            case 3: random_insert();
            break;
            case 4: delete_at_start();
            break;
            case 5: delete_at_end();
            break;
            case 6: random_delete();
            break;
            case 7: display();
            break;
            case 8: exit(1);
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
        else
        {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
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

void delete_at_start()
{
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("List is empty \n\n");
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("Node deleted.\n");
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
        printf("Node deleted.\n");
    }  
}

void delete_at_end()
{
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("List is empty \n\n");
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
        printf("Node deleted.\n");
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
        printf("Node deleted.\n");
    }  
}

void random_delete()
{
    struct node *ptr, *temp;  
    int val;  
    printf("Enter the position of the node after which you want to delete: \n");
    scanf("%d", &val);  
    ptr = head;  
    while(ptr -> data != val)  
    ptr = ptr -> next;  
    if(ptr -> next == NULL)  
    {  
        printf("Empty list. \n\n");
    }  
    else if(ptr -> next -> next == NULL)  
    {  
        ptr ->next = NULL;  
    }  
    else  
    {   
        temp = ptr -> next;  
        ptr -> next = temp -> next;  
        temp -> next -> prev = ptr;  
        free(temp);  
        printf("Deleted node.");
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