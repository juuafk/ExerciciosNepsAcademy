/*
Plataforma: Neps Academy
Exercício: Média Inteira (ID 136)
Link: https://neps.academy/br/exercise/136
Linguagem: C
Autor: juu_arak
ID Resolução: 1818112
*/

#include <stdio.h>

int main() {
    int A, B;
    int media;

    scanf("%d" "%d", &A, &B);

    if ((A > 1000 || A < -1000) || (B > 1000 || B < -1000)) {
        printf("valor invalido");
    } else {
        media = (A + B)/2;
        printf("%d", media);
    }

    return 0;
}