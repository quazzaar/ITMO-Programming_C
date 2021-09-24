#include <stdio.h>

int main()
{
    int number; 
    char str[80]; // объявление переменных

    scanf("%[^\n]s", str); 
    scanf("%d", &number); //сканирование строки и целого числа с консоли

    printf("%s\n", str); 
    printf("%d\n", number); //вывод строки и числа в консоль

    return 0;
}
