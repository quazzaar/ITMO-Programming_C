#include <stdio.h>

int arr[9] = {12, 13, 14, 15, 16, 17, 18, 19, 20};
int A[2][2] = {1, 1, 0, 1};
int B[2][2] = {2, 0, 3, 0};
int C[2][2] = {0};


int main(){

    printf("\n");
    printf("Array: ");
    printf("\n");
    for(int i = 0; i < 9; i++)                      //Вывод массива
        printf("%d ", arr[i]);

    printf("\n");
    printf("Result: ");
    for(int i = 0; i < 2; i++)                      //перемножение матриц
        for(int j = 0; j < 2; j++)
            for(int k = 0; k < 2; k++)
                C[i][j] += A[i][k] * B[k][j];
    for(int i = 0; i < 2; i++){
        printf("\n");
        for(int j = 0; j < 2; j++)
            printf(" %d ", C[i][j]);        //вывод результирующей матрицы
    }

    return 0;
}
