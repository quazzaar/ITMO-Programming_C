#include <stdio.h>

int main()
{
    int number;
    char str[80];

    fgets(str, sizeof(str), stdin);
    scanf("%d", &number);

    printf("%s\n", str);
    printf("%d\n", number);

    return 0;
}
