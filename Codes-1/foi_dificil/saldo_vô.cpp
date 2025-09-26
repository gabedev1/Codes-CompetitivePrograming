#include <bits/stdc++.h>
using namespace std;

int main(){
    int d;
    int saldo = 0;
    int gasto = 0;

    cin >> d >> saldo;

    int array[d];

    for (int i = 0; i<d; i++){
        cin >> gasto;

        saldo = saldo + gasto;

        array[i] = saldo;

    }

    int tam = d;

    int resp = array[0];

    for(int i = 0; i<tam; i++){
        if(array[i]<resp){
            resp = array[i];
        }
    }

    cout << resp << endl;
}