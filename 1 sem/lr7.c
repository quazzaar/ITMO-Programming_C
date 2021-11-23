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
    int x, y; //объявляем структуру
    int length;

};

struct LaserPrinter {
    unsigned NotEnoughToner : 1;  //объявляем битовое поле
    unsigned DrumDamaged: 1;
    unsigned NoPaper : 1;
};

int getPerimeter(int length) {
    int Per = 4 * length;
}

int getArea(int length) {
    int A  = length * length;
}

int main() {

    int type;
    type = Bus;
    printf("\n1) Your type of car is: %d - it is Bus\n", type);

    struct Square Square;
    printf("\n2) Square: ");
    printf("\nCoordinates: \n");
    scanf("  %d %d", &(Square.x), &(Square.y));  //считываем координаты квадрата
    printf("\nLength: \n");
    scanf("%d", &(Square.length));
    int P = getPerimeter(Square.length);
    int S = getArea(Square.length); //расчёт периметра и площади
    printf("Perimeter: %d", P);
    printf("\nS: %d", S);

    struct LaserPrinter Condition;
    printf("\nAdd hex number: ");
    scanf("%x", &(Condition));
    printf("\n3) Laser Printer condition:");
    printf("\n  NotEnoughToner:   %s", (Condition.NotEnoughToner) ? "ON" : "OFF");
    printf("\n  DrumDamaged:  %s", (Condition.DrumDamaged) ? "ON" : "OFF");
    printf("\n  NoPaper:    %s", (Condition.NoPaper) ? "ON" : "OFF");

}
