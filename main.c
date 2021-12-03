#include <stdio.h>
#include "circle.h"
#include "calculations.h"

int main()
{
    int Ox, Oy;
    int Mx, My;
    printf("Введите координаты центра вашей окружности: \n");
    printf ("Ox: ");
    scanf("%d", &Ox);
    printf ("Oy: ");
    scanf("%d", &Oy);
    printf("Введите координаты центра вашей окружности: \n");
    printf ("Mx: ");
    scanf("%d", &Mx);
    printf ("My: ");
    scanf("%d", &My);

    struct Circle wheel = makeCircle(Ox, Oy, Mx, My);
    float rad = radius(wheel.O.x, wheel.O.y, wheel.M.x, wheel.M.y);
    float square = areaOfCircle(rad);
    float discLength = circumference(rad);
    printf("%s %f\n", "Радиус вашей окружности: ", rad);
    printf("%s %f\n", "Площадь: ", square);
    printf("%s %f\n", "Длина окружности: ", discLength);
    printf("%s %s %d %s %d %s %f", "Уравнение окружности вида (x-a)^2 + (y-b)^2 = r^2: ", "(x -", Ox, ")^2 + (y -", Oy, ")^2 =", rad * rad);
}
