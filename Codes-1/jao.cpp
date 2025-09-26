#include <bits/stdc++.h>
using namespace std;

int main(){
    int M=0;
    int F1=0;
    int F2=0;

    cin >> M >> F1 >> F2;

    int soma = M - (F1+F2);
    
    if(soma>F1){
        cout << soma << endl;
    }

    if(soma>F2){
        cout << soma << endl;
    }

    if(F1==F2){
        cout << F1 << endl;
        return F1;
    }

    if(soma < F1){
        cout << F1 << endl;
    }

    if(soma < F2){
        cout << F2 << endl;
    }

    return 0;
}