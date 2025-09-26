#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int soma [4];
    int batman;

    for(int i = 0; i < 4; i++){
        cin >> a;
        soma[i] = a;

        batman = soma[0] + soma [1] + soma [2] + soma[3];


    }
    if (batman >= 20){
        cout << "V" << endl;
    }

    if (batman < 20){
        cout << "F" << endl;
    }
}