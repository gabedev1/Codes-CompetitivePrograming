#include <bits/stdc++.h>
using namespace std;
#define E and
#define OU or
#define ll long long

int main(){
    int n;
    string gabarito;
    string respostas;
    
    cin >> n;
    cin >> gabarito;
    cin >> respostas;

    int contador = 0;

    for(int i = 0; i<n; i++){
        if(gabarito[i] == respostas[i]){
            contador += 1;
        }
    }

    cout << contador << endl;
}