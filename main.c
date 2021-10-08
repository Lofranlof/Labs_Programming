#include <stdio.h>

int main()
{
    int number, number2;
    scanf("%x", &number);
    printf("%o - %s\n", number, " введенное число в 8 системе счисления");
    printf("%o, %o - %s\n", number, number << 3, "введенное число с побитовым сдвигом вправо на 3");
    printf("%o, %o - %s\n" , number, ~number, "введенно число с побитовым отрицание");
    scanf("%o", &number2);
    printf("%o - %s", number2^number, "number исключаещее или number2");


}
