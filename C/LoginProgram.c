/*Login Program CSBS-07*/
#include <stdio.h>
int main()
{
    int User_name, Pass_word;
    User_name = 123789;
    Pass_word = 987321;
    printf("Enter the Username and Password: \n");
    printf("Username : \n");
    scanf("%d", &User_name);
    printf("Password : \n");
    scanf("%d", &Pass_word);

    if(User_name == 123789 && Pass_word == 987321){
        printf("Logged in successfully");
    }
    else
        printf("Invalid Username or Password. Try again");
    return 0;
}
