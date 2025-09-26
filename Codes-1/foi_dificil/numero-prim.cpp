#include <bits/stdc++.h>
using namespace std;

signed main(){
    int num;
    cin >> num;

    vector<int>lista;

    for(int i = 1; i <= num; i++){
        int prim = num%i;

        if(prim==0){
            lista.push_back(prim);
        }
    }

    if(num==1){
        cout << "Não é primo";
    }

    if(lista.size()>2){
        cout << "Não é primo";
    }

    if(lista.size()==2){
        cout << "É primo";
    }

    return 0;
}