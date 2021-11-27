#include "parallelogram.h"

float getPerimeter(struct Parallelogram p){
    return 2*sqrt(pow(p.x2 - p.x1, 2) + pow(p.y2 - p.y1, 2)) + 2*sqrt(pow(p.x3 - p.x2, 2) + pow(p.y3 - p.y2, 2));
}

float getArea(struct Parallelogram p){
    return sqrt(pow(p.x4 - p.x1, 2) + pow(p.y4 - p.y1, 2))*(p.y2 - p.y1);
}