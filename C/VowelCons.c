/*Determining if the alphabets are consonants or vowels CSBS-07*/
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any desired alphabet\n");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    printf("Character %c is a vowel", ch);

    else if ('a' <= ch <= 'z' || 'A' <= ch <= 'Z')
    printf("Character %c is a consonant", ch);

    else
        printf("Character %c is not an alphabet", ch);

    return;
}
