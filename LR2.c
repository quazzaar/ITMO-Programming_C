#include <stdio.h>
#include <math.h>

int main()
{
    double z1, z2, a;
    double pi=3.1415926;
    scanf("%lf", &a);
    a=a*pi/180;
    
    z1=(cos(a)+sin(a))/(cos(a)-sin(a));
    printf("%.2f\n", z1);
    
    z2=tan(2*a)+1/cos(2*a);
    printf("%.2f\n", z1);
    
    return 0;
}
