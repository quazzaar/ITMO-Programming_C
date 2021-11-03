#include <stdio.h>
#include <math.h>

enum TypesOfCar { //объявляем перечислимый тип данных
    Bus = 1,
    Hatchback,
    Universal,
    Sedan,
    Coupe,
    Pickup,
    Minivan
};

struct Square {
    int x0, x1, x2, x3, y0, y1, y2, y3;     //объявляем структуру
    int S;
    int P;
};

struct LaserPrinter {
    unsigned NotEnoughToner : 1;  //объявляем битовое поле
    unsigned DrumDamaged: 1;
    unsigned NoPaper : 1;
};

int main() {
    int type;
    type = Bus;
    printf("\nYour type of car is: %d - it is Bus", type);

    struct Square Square;
    printf("\nSquare: ");
    printf("\nCoordinates: \n");
    scanf("  %d %d", &(Square.x0), &(Square.y0));  //считываем координаты квадрата
    scanf("  %d %d", &(Square.x1), &(Square.y1));
    scanf("  %d %d", &(Square.x2), &(Square.y2));
    scanf("  %d %d", &(Square.x3), &(Square.y3));
    Square.P = 4 * (Square.y1 - Square.y0);
    Square.S = (Square.y1 - Square.y0) * (Square.y1 - Square.y0);  //расчёт периметра и площади
    printf("Perimeter: %d", Square.P);
    printf("\nS: %d", Square.S);

    struct LaserPrinter Condition;
    printf("\nAdd hex number: ");
    scanf("%x", &(Condition));
    printf("Laser Printer condition:");
    printf("\n  NotEnoughToner:   %s", (Condition.NotEnoughToner) ? "ON" : "OFF");
    printf("\n  DrumDamaged:  %s", (Condition.DrumDamaged) ? "ON" : "OFF");
    printf("\n  NoPaper:    %s", (Condition.NoPaper) ? "ON" : "OFF");
}
