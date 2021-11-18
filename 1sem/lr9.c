#include <stdio.h>


int main() {

    int n;

    printf("4) Enter right border: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i <= n; i++)
        a[i] = i;

    for (int i = 2; i * i <= n; i++)
    {
        if (a[i])
            for (int j = i*i; j <= n; j += i)
                a[j] = 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i]!=0)
        {
            printf("%d ", a[i]);        }
    }

    int month;
    double percent;
    double money;

    printf("5)Enter the amount you wish to deposit into the bank account: ");
    scanf("%lf", &money);
    printf("Interest rate: ");
    scanf("%lf", &percent);
    printf("Enter the number of months: ");
    scanf("%d", &month);
    printf("\n");
    for (int i = 1; i <= month; i++) {
        money = (1 + percent/100/12) * money;
        printf("Money %.2lf for %d month", money, month);
        printf("\n");
    }
    
}

