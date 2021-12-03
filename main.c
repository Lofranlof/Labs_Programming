#include <stdio.h>

void intToStr(int number)
{
    char str[1];
    if (number == 0)
        printf ("Your number is zero ");
    else if (number == 1)
        printf("Your number is one ");
    else if (number == 2)
        printf("Your number is two ");
    else if (number == 3)
        printf("Your number is three ");
    else if (number == 4)
        printf("Your number is four ");
    else if (number == 5)
        printf("Your number is five ");
    else if (number == 6)
        printf("Your number is six ");
    else if (number == 7)
        printf("Your number is seven ");
    else if (number == 8)
        printf("Your number is eight ");
    else if (number == 9)
        printf("Your number is nine ");
    else
        printf("Please enter the number from 0 to 9");
}
void primeNumbers(int number)
{
    printf("Here's all of the prime numbers that are less or equal to your number:\n");
        for (int prime = 2; prime <= number; prime++)
        {
            for (int i = 2; i <= prime; i++)
            {
                if (prime == i)
                {
                    printf("%d ", prime);
                    break;
                }
                else if (prime % i == 0)
                    break;
            }
        }
}
int main()
{
    int number1, number2;
    printf("Enter a number from 0 to 9\n");
    scanf("%d", &number1);
    intToStr(number1);
    printf("\nEnter another number\n");
    scanf("%d", &number2);
    primeNumbers(number2);
    return 0;
}
