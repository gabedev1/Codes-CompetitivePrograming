#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool Num_primos(int n){
    if( n < 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }

    return true;
}

vector<int>intervalo(int a, int b){
    vector<int>numprimos;
    for(int n = a+1; n<=b; n++){
        if(Num_primos(n)){
            numprimos.push_back(n);
        }
    }

    return numprimos;
}

int main(){
    int termo_um;
    int termo_dois;

    cin >> termo_um >> termo_dois;

    vector<int>primos = intervalo(termo_um, termo_dois);

    for (int resp : primos) {
            cout << resp << " ";
    }
}