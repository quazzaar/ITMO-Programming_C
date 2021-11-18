#include <stdio.h>
#include <string.h>

int GetNumber(int number)
{
    if(number == 0)
        return 0;
    return (number % 10) + GetNumber(number / 10);
}

void DeleteExtraSpaces(char* str, int pos) {
    int i;
    if ((str[pos] == ' ') && (str[pos+1]) == ' ')
        DeleteExtraSpaces(str,pos+1);

    for (i = pos; i < strlen(str) - 1; i++)
    {
        str[i] = str[i+1];
    }
    str[i]=0;
}

int main() {
    int number;
    char str[100];
    int i;

    printf("4) Enter number: ");
    scanf("%d", &number);
    printf("%d\n", GetNumber(number));

    printf("5) Enter string: ");
    scanf(" %[^\n]s", &str);

    for (i = 0;i < strlen(str); i++) {
        if ((str[i] == ' ') && (str[i + 1] == ' '))
            DeleteExtraSpaces(str, i + 1);
    }
    printf("%s\n", str);

    return 0;
}
