#include <stdio.h>
#include <string.h>
int main(){

    char str1[100];
    char str2[100];
    printf("First string: \n");
    scanf(" %[^\n]s", &str1);
    printf("Second string: \n");
    scanf(" %[^\n]s", &str2);
    char temp[100];
    strcpy(temp, str1);
    printf("1) Concatenation: %s\n", strcat(temp, str2)); //сложение строк

    int n;
    printf("4) Enter the number of characters you want to compare: "); //сравнение первых n символов
    scanf("%d",&n);
    printf("Comparison: ");
    if (strncmp(str1, str2, n)==0)
        printf("These symbols match\n");
    else
        printf("These symbols doesn't match\n");

    printf("7) String length: %d\n", strlen(str1));  //длина строки

    char key;
    printf("10) Search symbol:");
    scanf("%s", &key);
    printf("Your symbol on %d position", strchr(str1,key) - str1 +1); //поиск символа, входящего во 2 строку в 1

    printf("\n12) Max length: %d\n", strcspn(str1, str2)); //

}
