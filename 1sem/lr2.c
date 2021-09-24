#include <stdio.h>
#include <math.h>

int main()
{
    double b;
    double z1, z2, a;
    double pi=3.1415926; //объявление переменных
    
    scanf("%lf", &a);
    scanf("%lf", &b); //считывание переменных с консоли

    if (a==45 || a==135) {
        printf("%s","Error, division by 0");   //область определения
        return 0;
    }
    
    a=a*pi/180;   //перевод градусной меры угла в радианную, т.к функции работают с радианами

    z1=(cos(a)+sin(a))/(cos(a)-sin(a));   //уравнения
    z2=tan(a*2)+1/cos(a*2);

    printf("%.3f\n", z1);
    printf("%.3f\n", z2);  //вывод значений

    printf("%.2lf\n", sqrt(b));   //доп. задание, использовать 3 доп.функции из библиотеки <math.h>
    printf("%.2lf\n",pow(b, b));
    printf("%.2lf\n",cbrt(b));

    return 0;
}
