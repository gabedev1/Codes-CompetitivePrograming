#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    char letra;
    char str2;
    getline(cin, n);

    for(int i = 0; i<n.size(); i++){
        letra = n[i];
        if(letra >= 'A' and letra <= 'Z'){
            str2 = (letra - 'A' + 13) % 26 + 'A';
            n[i] = str2;
        }
    }
    cout << n << endl;
}