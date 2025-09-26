#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int lista[10];
    for(int i = 0; i<10; i++){
        cin >> n;
        lista[i] = n;
    }

    int tam = sizeof(lista)/sizeof(0);
    //sort(lista, lista + tam);
    reverse(lista, lista + tam);

    for(int i = 0; i<tam; i++){
        cout << lista[i] << endl;
    }
}