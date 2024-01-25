#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>

void display_red(void);
void display_yellow(void);
void display_green(void);

int main()
{
    char signal[50];
    printf("Enter the colour of the traffic signal: \n");
    gets(signal);

    if(strcmp(signal, "Red") == 0)
    {
        display_red();
    }
    else if(strcmp(signal, "Yellow") == 0)
    {
        display_yellow();
    }
    else if(strcmp(signal, "Green") == 0)
    {
        display_green();
    }
    else
    {
        exit(0);
    }
    return 0;
}

void display_red()
{
    int i;
    sleep(2);
    printf("RED SIGNAL! Stop...\n");
    for (i=10; i>=1; i--)
    {
        printf("Timer : %d \n", i);
        sleep(1);
    }
    display_yellow();
}

void display_yellow()
{
    sleep(2);
    printf("YELLOW SIGNAL. Start...\n");
    display_green();
}

void display_green()
{
    int i;
    sleep(2);
    printf("GREEN SIGNAL. You can go...\n");
    for (i=10; i>=1; i--)
    {
        printf("Timer : %d \n", i);
        sleep(1);
    }
    display_red();
}