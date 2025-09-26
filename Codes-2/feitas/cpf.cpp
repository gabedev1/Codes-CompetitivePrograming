#include <bits/stdc++.h>
using namespace std;

signed main(){
    string pao;
    int lista[14] = {-1};

    cin >> pao;

    //for checando as pontuações para anulalas
    for(int i = 0; i<14; i++){

        if (pao[i]=='.'){
            continue;
        }

        if (pao[i]=='-'){
            continue;
        }
        //transformando as string em inteiros e guardando os valores na lista
        lista[i] = pao[i] - '0';
    }

    //for usando if para cancelar as pontuações para fazer os calculos
    for(int i = 0; i<14; i++){
        if(lista[i+4]==0){
            continue;
        }

        cout << lista[i];
        //for para fazer os calculos e guardar os valores em uma lista que eu irei fazer
        //* fazer uma lista para multiplicar os valores
    }



    return 0;
}