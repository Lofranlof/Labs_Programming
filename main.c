#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char symbol;
    char string1[1024];
    char string2[1024];
    char string3[1024];
    printf("Write some string\n");
    scanf("%s", string1);
    printf("Write another string\n");
    scanf("%s", string2);

    if (strcmp(string1, string2) == 0)//task 1
    {
        printf("The strings you wrote are the same\n");
    }
    else
        printf("The strings are not the same\n");

    printf("I copied the first string into another one for you: %s\n", strcpy(string3, string1)); // task 2
    printf("Here's the length of the first string: %lu\n", strlen(string1)); // task 3

    printf("Write the symbol you want to know the last position of in the first string you put: "); // task 4
    scanf("\n%c", &symbol);
    char* ptr;

    ptr = strrchr(string1, symbol);
    if (ptr != NULL)
        printf("\nThe last position of your symbol is: %ld\n", ptr-string1+1);
    else
        printf("\nThere is no such symbol in the first string you put\n");

    if (strspn(string2, string1) != 0) // task 5
        printf("The length of substring from 2-nd string in the 1-st string is: %lu ", strspn(string2, string1));
    else
        printf("There is no substrings from 2-nd string that are exist in the 1-st one");


    return 0;
}
