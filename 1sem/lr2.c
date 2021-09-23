#include <stdio.h>
#include <math.h>

int main()
{
    double z1, z2, a;
    double pi=3.1415926;
    scanf("%lf", &a);

    if (a==45 || a==135) {
        printf("%s","Error, division by 0");
        return 0;
    }
    
    a=a*pi/180;

    z1=(cos(a)+sin(a))/(cos(a)-sin(a));
    z2=tan(a*2)+1/cos(a*2);

    printf("%.3f\n", z1);
    printf("%.3f\n", z2);

    return 0;
}
