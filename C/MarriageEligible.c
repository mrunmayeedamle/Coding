/*Checking if the candidate is eligible for marraige or not*/
#include <stdio.h>
int main()
{
    int Age;
    char Gender;
    printf("Please enter the gender and age of the candidate(M/F): \n");
    scanf("%c %d", &Gender, &Age);

    if(Gender == 'M' && Age >= 21){
        printf("Your candidate is eligible");
    }
    else if(Gender == 'F' && Age >= 18) {
        printf("Your candidate is eligible");
    }
    else
        printf("Your candidate is not eligible");
    return 0;
}
