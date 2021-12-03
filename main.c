#include <stdio.h>
#include <math.h>
void toArray(int number)
{
    int size = (int)(ceill(log10(number)) * sizeof(char));
    int array[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = number % 10;
        number = number / 10;
    }

    for (int i = size-1; i >= 0; i--)
        printf("%d ", array[i]);
}

int sum = 0;
int sumOfDigits(int number)
{
    int theNumber = number;
    sum = sum + theNumber % 10;
    if (theNumber > 0)
        sumOfDigits(theNumber / 10);

    return sum;
}
int main()
{
    int number, number2;
    printf("Enter a number: \n");
    scanf("%d", &number);
    toArray(number);

    printf("\nEnter another number: \n");
    scanf("%d", &number2);
    printf("%d",sumOfDigits(number2));
    return 0;
}
