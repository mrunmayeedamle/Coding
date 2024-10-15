//Array Operation - 1) Display content, 2) Insert an element in specific position
//3) delete specific item, 4) Search an element, 5) Reversing an Array

#include <stdio.h>
#include <stdlib.h>
void display_array(int array[100]);
void insert_element(int array[100]);
void delete_element(int array[100]);
void search_array(int array[100]);
void reverse_array(int array[100]);

int i, j, n;

int main()
{
    int array[100], x;
    char c;
    printf("Enter the number of elements to be inserted: \n");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    do
    {
    printf("Enter the operation to be performed: \n");
    printf("1. Display the array \n 2. Insert an element \n 3. Delete an element \n 4. Search an element \n 5. Reverse the array \n 6. Exit\n\n");
    scanf("%d", &x);

    switch(x)
    {
        case 1: display_array(array);
        break;
        case 2: insert_element(array);
        break;
        case 3: delete_element(array);
        break; 
        case 4: search_array(array);
        break;
        case 5: reverse_array(array);
        break;
        default: printf("Invalid choice. Program terminated");
                 exit(0);
    }
    printf("Do you want to continue? (Y)es or (N)o ");
    scanf(" %c", &c);
    }
    while(c == 'Y' || c == 'y');
    return 0;
}

void display_array(int array[100])
{
    printf("Displaying array: ");
    printf("[ ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }    
    printf("]");
}

void insert_element(int array[100])
{
    int num, pos;
    printf("Enter the number to be inserted: \n");
    scanf("%d", &num);
    printf("Enter the position in which to be inserted: \n");
    scanf("%d", &pos);
    n++;
    for(i = n-1; i>= pos; i--)
    {
        array[i] = array[i-1];
    }
    array[pos-1] = num;
    printf("Displaying array: ");
    printf("[ ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }    
    printf("]");
}

void delete_element(int array[100])
{
    int pos;
    printf("Enter the position of number you want to delete. \n");
    scanf("%d", &pos);
    if (pos >= n+1)  
    {  
        printf("Deletion is not possible in the array. \n");  
    }  
    else  
    {  
        for (i = pos - 1; i < n -1; i++)  
        {  
            array[i] = array[i+1];
        }  
    }
    printf("The resultant array is: \n");  
    for (i = 0; i< n - 1; i++)  
        {  
            printf (" array[%d] = ", i);  
            printf (" %d \n", array[i]);  
        } 
}

void search_array(int array[100])
{
    int num;
    printf("Enter the number you want to search. \n");
    scanf("%d", &num);
    for(i = 0; i < n; i++)
    {
        if (array[i] == num)
        {
            printf("Element %d found in position %d \n", num, i+1);
            break;
        }
    }
    if(i == n)
    {
        printf("Element %d isn't present in the array. \n", num);
    }
}

void reverse_array(int array[100])
{
    int rev[n];
    int j = 0;
    printf("Array before reversing: [");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }    
    printf("] \n");

    for(i = n - 1; i >= 0; i--)
    {
        rev[j] = array[i];
        j++;
    }

    printf("Array after reversing: [");
    for(i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
    }
    printf("] \n");
}