#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int n = 5;
    char arr[n];
    char *p = arr;
    int i, j;

    printf("Add values in array by pointer: ");

    for (i = 0; i < n; i++)
        scanf("%c", &arr[i]);   //заполнение массива

    printf("Your values: ");
    for(i = 0; i < n; i++)
        printf("%c, ", *(arr + i));    //вывод массива

    char *dynamic;
    dynamic = (char*)malloc(n * sizeof(char)); // создание массива в динамической памяти

    printf("\nAdd values in array(dynamic memory): ");      //заполнение массива
    for (j = 0; j < n; j++)
        scanf("%c", &dynamic[j]);

    printf("Your values: ");
    for (j = 0; j < n; j++)
        printf("%c, ", *(arr + j));     //вывод массива

    free(dynamic);      //очистка динамической памяти

    return 0;
}
