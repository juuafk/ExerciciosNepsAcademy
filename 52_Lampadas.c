/*
Plataforma: Neps Academy
Exercício: Lâmpadas (ID 52)
Link: https://neps.academy/br/exercise/52
Linguagem: C
Autor: juu_arak
ID Resolução: 1820510
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool A = false;
    bool B = false;
    int N;

    scanf("%d", &N);
    int n[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < N; i++) {
        if(n[i] == 1) {
            A = !A;
        } else {
            A = !A;
            B = !B;
        }
    }
    printf("%d\n%d", A, B);

    return 0;
}
