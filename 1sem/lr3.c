#include <stdio.h>

int main()
{
    int number1, number2;
    int result;

    scanf("%d", &number1); //Запросите с консоли целое число в 10-ричной системе счисления. (1)
    printf("%o\n", number1); //Выведите на консоль введённое число в 8-ричной системе счисления. (2)
    printf("%x", number1); //Выведите на консоль введённое в задании 1 число в 16-ричной системе счисления (3)
    printf(" ");
    printf("%x\n", number1 >>2); //А также это же число в той же системе счисления, но сдвинутое вправо на 2 бита (3)
    printf("%x", number1); //Выведите на консоль введённое в задании 1 число в 16-ричной системе счисления (4)
    printf(" ");
    printf("%x\n", ~number1);//А также это же число в той же системе счисления после применения к нему битовой операции отрицания (5)
    scanf("%x", number2); //Введите с консоли целое число в 16-ричной системе счисления (5)
    printf("%x","%x\n", number1 & number2 );//Выведите на консоль результат битовой операции "и" первого и второго числа (5)

    return 0;
}