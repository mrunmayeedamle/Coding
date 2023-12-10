#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void display();
void insert_at_start();
void insert_at_end();
void random_insert();
void delete_at_start();
void delete_at_end();
void random_delete();

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
    int num;
    ptr = (struct node*)malloc(sizeof(struct node));
    
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
    ptr = (struct node*)malloc(sizeof(struct node));

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
    ptr = (struct node*)malloc(sizeof(struct node));

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

void delete_at_start()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("List is empty \n\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("Node deleted from the start.\n");
    }
}

void delete_at_end()
{
    struct node *ptr, *ptr_1;
    if(head == NULL)
    {
        printf("List is empty\n\n");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("Only node in the list deleted\n\n");
    }
    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr_1 = ptr;
            ptr = ptr->next;
        }
        ptr_1->next = NULL;
        free(ptr);
        printf("Deleted node from the end\n\n");
    }
}

void random_delete()
{
    int i, loc;
    struct node *ptr, *ptr_1;

    printf("Enter the position of the node after which you want to delete: \n");
    scanf("%d", &loc);

    if(loc == 0)
    {
        ptr = head;
        if(ptr == NULL)
        {
            printf("Empty list. \n\n");
        }
        head = head->next;
        free(ptr);
        printf("Deleted first node. \n\n");
        return;
    }
    else
    {
        ptr = head;
        for(i = 0; i < loc; i++)
        {
            ptr_1 =  ptr;
            ptr = ptr->next;
            if(ptr == NULL)
            {
                printf("Delete operation cannot be performed. \n");
                return;
            }
        }
        ptr_1->next = ptr->next;
        free(ptr);
        printf("Deleted node at %d", loc+1);
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