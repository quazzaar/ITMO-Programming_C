#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    FILE *file;
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    file = fopen("result.txt", "w");
    fprintf(file, "%d\n", a + b);
    fclose(file);
    return 0;
}
