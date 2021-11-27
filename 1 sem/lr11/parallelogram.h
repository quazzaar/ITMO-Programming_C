#ifndef INC_11_PARALLELOGRAM_H
#define INC_11_PARALLELOGRAM_H
#include "math.h"

struct Parallelogram{
    float x1, y1;
    float x2, y2;
    float x3, y3;
    float x4, y4;
};

float getPerimeter(struct Parallelogram p);
float getArea(struct Parallelogram p);

#endif //INC_11_PARALLELOGRAM_H
