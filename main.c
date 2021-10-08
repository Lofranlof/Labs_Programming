#include <stdio.h>
int main()
{
    int number, number2;
    scanf("%d", &number);
    (number >= 1 && number <= 1000) ? printf("Number is in range\n") : printf("Number out of range\n");
    scanf("%d", &number2);
    printf("%d", (number2 >> 3) % 2);
    return 0;
}
