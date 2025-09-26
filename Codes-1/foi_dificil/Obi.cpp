#include <bits/stdc++.h>
using namespace std;

int main(){
    int comp;
    int Pmin;

    cin >> comp >> Pmin;

    int array[comp];
    int pontos1 = 0;
    int pontos2 = 0;

    int resp = 0;
    int lixo = 0;

    for(int i = 0; i<comp; i++){
        cin >> pontos1 >> pontos2;
        array[i] = pontos1 + pontos2;
        if(array[i]>=Pmin){
            resp += 1;
        }
    }

    cout << resp << endl;
}