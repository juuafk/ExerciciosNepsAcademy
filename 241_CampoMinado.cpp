/*
Plataforma: Neps Academy
Exercício: Campo Minado (ID 241)
Link: https://neps.academy/br/exercise/241
Linguagem: C++
Autor: juu_arak
ID Resolução: 1323189
*/

#include <iostream>
using namespace std;

int main(){
  int n;
    cin >> n;
    int vetor[n];
    int vet[n];                                                              
    
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
        vet[i] = 0;
    }
    
    for(int i = 0; i < n; i++) {
    if(vetor[i] == 1) {
        vet[i - 1]++;
        vet[i]++;
        vet[i + 1]++;
        }
    }   

    for (int i = 0; i < n; i++) {
        cout << vet[i];
    }

    return 0;
}