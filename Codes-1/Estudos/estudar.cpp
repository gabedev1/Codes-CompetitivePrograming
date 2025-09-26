#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> vetor(10); // Declaração do vetor de tamanho 10

    // Ler os 10 valores e armazenar no vetor
    for (int i = 0; i < 10; ++i) {
        cin >> vetor[i];
    }

    // Encontrar o menor valor no vetor
    int menor_valor = * min_element(vetor.begin(), vetor.end());

    // Exibir o menor valor
    cout << "Menor: " << menor_valor << endl;

    // Encontrar os índices onde o menor valor aparece
    cout << "Ocorrencias: ";
    for (int i = 0; i < 10; ++i) {
        if (vetor[i] == menor_valor) {
            cout << i << " "; // Exibir os índices
        }
    }
    cout << endl;

    // Substituir o menor valor por -1 em todas as suas ocorrências
    for (int i = 0; i < 10; ++i) {
        if (vetor[i] == menor_valor) {
            vetor[i] = -1;
        }
    }

    // Exibir o vetor resultante
    for (int i = 0; i < 10; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
