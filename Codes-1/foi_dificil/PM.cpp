#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    int a;
    int resp = 0; 
    int soma = 0;
    int lm = 1000000;

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> a;
        soma= soma + a;
        if (soma<=lm) {
            resp = resp + 1;

        }
        
    }

    cout << resp << endl;
}