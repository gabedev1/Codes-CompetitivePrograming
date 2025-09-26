#include <bits/stdc++.h>
using namespace std;

int buscaBinaria(int arr[], int tam, int x){

    int inicio = 0;
    int fim = tam - 1;
    
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == x){
            return meio;

        }

        if (arr[meio] < x){
            inicio = meio + 1;

        }
        else{
            fim = meio - 1;

        }
    }

    return -1;
}

int main(){
    int n;
    int x;
    int arr[10];

    //saber o tamanho da array para usar na busca;

    for (int i; i<10; i++){
        cin >> n;
        arr[i] = n;
    }
    cin >> x;
    int tam = sizeof(arr)/sizeof(arr[0]);
    int result = buscaBinaria(arr, tam, x);

    
    sort(arr, arr + tam);

    if(result != -1){
        cout << "SIM" << endl;

    }

    else {
        cout << "NÃO" << endl;

    }

    return 0;
}