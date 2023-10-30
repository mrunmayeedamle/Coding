//Performing linked list operations such as traversing, inserting, deleting, searching, sorting & printing
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node** head_ref = &head;
void traverse();
void insert();
void delete();
int search();
void sort();
void display();


int main()
{
    int n;
    char c;
    do
    {
        printf("Queue Operations: \n \n");
        printf("Select the operation to be performed: \n");
        printf("1) Inserting an element, 2) Deleting an element, 3) Searching the list, 4) Sorting the list, 5)Printing the list 6) Exit -> ");
        scanf("%d", &n);

        switch(n)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: search();
            break;
            case 4: sort();
            break;
            case 5: display();
            break; 
            case 6: exit(1);
            break;
            default: printf("Invalid Input!! \n"); 
        }
        printf("Do you want to continue? -> (Y)es or (N)o? \n");
        scanf(" %c", &c);
        sleep(1);
    } while (c == 'Y' || c == 'y');
    return 0;    
}

void insert()
{
    int num, x;
    char ch;
    do
    {
        printf("Enter the number you want to insert:\n");
        scanf("%d", &num);
        printf("Do you want to insert the number at (1) The start, (2) After, (3) At the end?");
        scanf("%d", &x);
        if(x == 1)
        {
            struct node* new_node = (struct node*)malloc(sizeof(struct node));

            new_node->data = num;
            new_node->next = (*head_ref);
            (*head_ref) = new_node;
        }
        if(x == 2)
        {
            if (head->next == NULL) 
            {
            printf("the given previous node cannot be NULL");
            return;
            }
            struct node* new_node = (struct node*)malloc(sizeof(struct node));
            new_node->data = num;
            new_node->next = head->next->next;
            head->next->next = new_node;
        }
        if(x == 3)
        {
            struct node* new_node = (struct node*)malloc(sizeof(struct node));
            struct node* last = *head_ref;

            new_node->data = num;
            new_node->next = NULL;

            if (*head_ref == NULL) 
            {
                (*head_ref) = new_node;
                return;
            }
            while (last->next != NULL) 
            {
                last = last->next;
                last->next = new_node;
                return;
            }
        }
        printf("Do you want to continue? -> (Y)es or (N)o? \n");
        scanf(" %c", &ch);
        sleep(1);
    } while (ch == 'Y' || ch == 'y'); 
    
       
}

void delete()
{ 
    int num;
    printf("Enter the number you want to delete:\n");
    scanf("%d", &num);

    struct node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == num) 
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != num) 
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) 
    {
        return;
    }
    prev->next = temp->next;
    free(temp);
}

int search()
{
    int num;
    printf("Enter the number you want to search:\n");
    scanf("%d", &num);

    struct node* current = *head_ref;
    while (current != NULL) 
    {
        if (current->data == num)
        {
            return 1;
        }
        current = current->next;
    }
  return 0;

  if (search()) 
  {
    printf("\n%d is found", num);
  }
  else 
  {
    printf("\n%d is not found", num);
  }
}

void sort()
{
    struct node *current = *head_ref, *index = NULL;
    int temp;

    if (head_ref == NULL) 
    {
        return;
    }
    else 
    {
        while (current != NULL) 
        {
            index = current->next;
            while (index != NULL) 
            {
                if (current->data > index->data) 
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

void display()
{
    while ( head != NULL) 
    {
        printf(" %d ", head->data);
        head = head->next;
    }
}