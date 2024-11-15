#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    char a = 65;
    printf("%c", a);

    // int a = 5;
    // printf("O valor de a � %d \n", a);
    // scanf("%d", &a);
    // printf("\n O Valor de a mudou para %d", a);

    // float b = 5.5;
    // printf("O valor de b � %f \n", b);
    // scanf("%f", &b);
    // printf("\n O Valor de b mudou para %f", b);

    // char c = 'T';
    // printf("O valor de c � %c \n", c);
    // fflush(stdin);
    // scanf("%c", &c);
    // printf("\n O Valor de c mudou para %c", c);

    return 0;
}
