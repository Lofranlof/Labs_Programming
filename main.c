#include <stdio.h>

int main()
{
    float var;
    char string[30];
    scanf("%[^\n]s", string);
    scanf("%f", &var);
    printf("\n%s %f", string, var);
    return 0;
}
