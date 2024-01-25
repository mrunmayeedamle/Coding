/*Problem Randomizer*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void generate_problem() {
    // Array of possible problem statements
    char *problems[] = {
        "calculate average of 5 subject marks.",
        "perform arithmetic operations on given two numbers.",
        "calculate area of circle, triangle, square, rectangle",
        "calculate simple interest.",
        "Calculate division obtain by student.",
        "Find even odd number",
        "Largest of 3 numbers",
        "Leap year program",
        "Calculator",
        "Display days in month",
        "Vowel/consonant",
        "Login program",
        "Positive, negative, zero",
        "Factorial",
        "fibonacci numbers",
        "prime number",
        "reverse number",
        "Palindrome",
        "Sum of digits",
        "Factorial.f",
        "fibonacci numbers.f",
        "prime number.f",
        "reverse number.f",
        "Palindrome.f",
        "Sum of digits.f",
        " Searching for a number in an array and display their position.",
        "smallest and largest number in an array and display their position.",
        "copy one array into another array in reverse order.",
        "calculate summation and average of array elements.",
        "count total duplicate elements in an array.",
        "count even and odd elements in an array. ",
        "print all negative elements in an array.",
        "Matrix Addition, Subtraction.",
        "Matrix multiplication.",
        "Palindrome String",
        "Palindrome String.w/o",
        "Reversing of string.",
        "Reversing of string..w/o",
        "string length.",
        "string length.w/o",
        "copy string.",
        "copy string.w/o",
        "store information (name, roll and marks) of a student using structure and display",
        "search record in array of structure and display the record information.",
        "read name and marks of n number of students from user and store them in a file.",
        "file open, file write and file close using file handling.",
        "file open, file read and file close using file handling."
    };
    int num_problems = sizeof(problems) / sizeof(problems[0]);

    // Generate a random index within the bounds of the array
    srand(time(NULL));
    int random_index = rand() % num_problems;

    // Print the randomly selected problem statement
    printf("%s\n", problems[random_index]);
}

int main() {
    char input[3];
    printf("Type \"GO\" to generate a random C problem statement:\n");
    scanf("%s", input);

    if (strcmp(input, "GO") == 0) {
        generate_problem();
    } else {
        printf("Invalid input. Please try again.\n");
    }

    return 0;
}
