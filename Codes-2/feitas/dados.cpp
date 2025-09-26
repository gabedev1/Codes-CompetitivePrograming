#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    int a;

    int lista[13] = {0};
    cin >> n;
    int maximo = 0;
    //lista que guarda o digito 1 para cada posição A do dado.
    for(int i = 0; i<n; i++){
        cin >> a;
        lista[a] += 1;
    }

    for(int i = 1; i<=12; i++){
        maximo = max(maximo, lista[i]);
    }

    for(int i = 1; i<=12; i++){
        if(lista[i]==maximo){
            cout << i << " ";
        }
    }
    return 0;
}