//
// Created by Руслан Давлетов on 28.11.2021.
//

#ifndef LAB11_CALCULATIONS_H_INCLUDED
#define LAB11_CALCULATIONS_H_INCLUDED

#include "circle.h"
struct Circle makeCircle(int Ox, int Oy, int Mx, int My);
float radius(int Ox, int Oy, int Mx, int My);
float areaOfCircle(float radius);
float circumference(float radius);

#endif //LAB11_CALCULATIONS_H_INCLUDED
