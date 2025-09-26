#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;

    int zerin[3];
    string ganhador;


    for(int i = 0; i < 3; i++){
        cin >> a;

        zerin[i] = a;
    }

    if (zerin[0] == zerin[1] != zerin[2]){
        cout << "C" << endl;
            
    }

    if (zerin [1] == zerin[2] != zerin[0]){
        cout << "A" << endl;
    }

    if (zerin[2] == zerin[0] != zerin[1]){
        cout << "B" << endl;
    }

    if (zerin[0] == zerin[1] == zerin[2]){
        cout << "*" << endl;
    }
}