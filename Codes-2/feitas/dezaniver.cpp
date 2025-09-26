#include <bits/stdc++.h>
using namespace std;

signed main(){
    int candidatos;
    int mes;
    int dia;

    int valida = 0;
    int invalida = 0;

    cin >> candidatos;

    for(int i = 0; i<candidatos; i++){
        cin >> dia;
        cin >> mes;

        if(dia > 30 && (mes==4, mes==6, mes==9, mes==11)>30){
            invalida += 1;
        }

        if(dia > 30 && (mes==1, mes==3, mes==5, mes==7, mes==8, mes==10, mes==12)>31){
            invalida += 1;
        }

        if(dia > 30 && (mes==2)>29){
            invalida += 1;
        }

        if(dia > 30 && mes > 12){
            invalida += 1;
        }

        else{
            valida += 1;
        }
    }

    cout << valida << endl << invalida;
}