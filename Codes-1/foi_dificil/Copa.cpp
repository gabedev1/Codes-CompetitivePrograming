#include <bits/stdc++.h>
using namespace std;

int main(){
    int C[3];
    int F[3];
    int a = 0;


    //ler as entradas e guarda-lás
    for (int i = 0; i<3; i++){
        cin >> a;
        C[i] = a;
    }

    for (int i = 0; i<3; i++){
        cin >> a;
        F[i] = a;
    }

    //comparar os valores usando um laço de for para
    // Ps = Posição no array
    // Ps 0 = Vitorias
    // Ps 1 = Empates
    // Ps 2 = Derrotas
    // Vitorias = x3
    // Empate = x1

    //laço for para somar os valores

    int SomaC = 0;
    int SomaF = 0;

    SomaC = (C[0] * 3)+ C[1];
    SomaF = (F[0] * 3) + F[1];

    if(SomaC>SomaF){
        cout << "C" << endl;
    }

    if(SomaF>SomaC){
        cout << "F" << endl;
    }

    if(SomaC==SomaF){
        if(C[2]>F[2]){
            cout << "C" << endl;
        }

        if (F[2]>C[2]){
            cout << "F" << endl;
        }

        if(C[2]==F[2]){
            cout << "=" << endl;
        }
    }
}