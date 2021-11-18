#include <stdio.h>
#include <stdlib.h>
#include <math.h>
enum Company
{
    ZAO = 1,//1-st place
    OOO = 2,//2-nd place
    OAO = 3,//3-rd place
    AO = 4,//4-th place
    IP = 5,//5-th place
};
struct coordinates
{
    int x, y;
};
struct Triangle
{
    struct coordinates c1;
    struct coordinates c2;
    struct coordinates c3;
    double area;
};

double calculateArea(int x1, int x2, int x3, int y1, int y2, int y3)
{
    double areaOfTriangle;
    int aVector[3] = {x2 - x1, y2 - y1, 0};//(4,1,0)
    int bVector[3] = {x3 - x1, y3 - y1, 0};//(3,5,0)
    int axbVector[3] = {aVector[1] * bVector[2] - aVector[2] * bVector[1], -(aVector[2] * bVector[0] - aVector[0] * bVector[2]), aVector[0] * bVector[1] - aVector[1] * bVector[0]};
    double axbLength = sqrt( pow(axbVector[0], 2) + pow(axbVector[1], 2) + pow(axbVector[2], 2) );
    areaOfTriangle = axbLength / 2;
    return areaOfTriangle;
}

struct bitField
{
    unsigned int power:1;
    unsigned int SD:1;
    unsigned int CompactFlash:1;
    unsigned int MemoryStick:1;
};

union justaUnion
{
    struct bitField justaField;
    unsigned int number;
};

int main()
{
    enum Company typeOfCompany = OOO;
    printf("Type OOO is on the %d place\n", OOO);

    struct Triangle chip;
    chip.c1.x = 1;//left corner
    chip.c1.y = 2;

    chip.c2.x = 5;//right corner
    chip.c2.y = 3;

    chip.c3.x = 4;//top corner
    chip.c3.y = 7;

    chip.area = calculateArea(chip.c1.x, chip.c2.x, chip.c3.x, chip.c1.y, chip.c2.y, chip.c3.y);
    printf("The area of a triangle is %f \n", chip.area);

    union justaUnion Unionidk;

    scanf("%x", &Unionidk.number);

    if (Unionidk.justaField.power == 1)
        printf("Card-reader is on\n");
    else
        printf("Card-reader is off\n");

    if (Unionidk.justaField.SD == 1)
        printf("SD card slot is full\n");
    else
        printf("SD card slot is empty\n");

    if (Unionidk.justaField.CompactFlash == 1)
        printf("Compact Flash is on\n");
    else
        printf("Compact Flash is off\n");

    if (Unionidk.justaField.MemoryStick == 1)
        printf("MemoryStick is on\n");
    else
        printf("MemoryStick is off\n");

    return 0;
}

