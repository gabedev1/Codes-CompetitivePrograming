#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    int a;

    int lista[13] = {0};
    cin >> n;
    int max = 0;
    //lista que guarda o digito 1 para cada posição A do dado.
    for(int i = 0; i<n; i++){
        cin >> a;
        lista[a] += 1;
        //se a lista for menor que o maximo da lista
        if(lista[i] > max){
            max = lista[i];
        }
    }

//fazer uma lista de 1 ao 12 e ir adicionando +1 na lista e dps imprimir os 
//valores q são diferente de "0";
    for(int i = 0; i<=12; i++){
        if(lista[i]>=max){
            cout << i << " ";
        }
    }

    return 0;
}