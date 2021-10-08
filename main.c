#include <stdio.h>
#include <math.h>

int main()
{
    double a, chislitel, znamenatel, z1, z2, z3, z4, z5, z6;
    scanf("%lf", &a);
    chislitel = sin(2 * a) + sin(5 * a) - sin(3 * a);
    znamenatel = cos(a) + 1 - 2 * pow(sin(2 * a), 2);
    z1 = chislitel / znamenatel;
    z2 = 2 * sin(a);
    /*z3 = tan(a);
    z4 = sqrt(a);
    z5 = log(a);*/
    printf("%lf\n %lf\n %lf\n %lf\n %lf\n", z1, z2 /*z3, z4, z5*/);
    return 0;
}
