/*Determining if the alphabets are consonants or vowels CSBS-07*/
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any desired alphabet\n");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a' :
    printf("Character %c is a vowel", ch);
    break;
    case 'e' :
    printf("Character %c is a vowel", ch);
    break;
    case 'i' :
    printf("Character %c is a vowel", ch);
    break;
    case 'o' :
    printf("Character %c is a vowel", ch);
    break;
    case 'u' :
    printf("Character %c is a vowel", ch);
    break;
    case 'A' :
    printf("Character %c is a vowel", ch);
    break;
    case 'E' :
    printf("Character %c is a vowel", ch);
    break;
    case 'I' :
    printf("Character %c is a vowel", ch);
    break;
    case 'O' :
    printf("Character %c is a vowel", ch);
    break;
    case 'U' :
    printf("Character %c is a vowel", ch);
    break;
    default:
    printf("Character %c is a consonant", ch);
    }
    return;
}
