#include <bits/stdc++.h>
using namespace std;
#define E and
#define OU or
#define ll long long

int main(){
    float valor1;
    float valor2;
    char operador;

    cin >> valor1 >> valor2 >> operador;

    float resultado;
    if(operador == '+'){
        resultado = valor1 + valor2;
        cout << resultado;
    }

    if(operador == '-'){
        resultado = valor1 - valor2;
        cout << resultado;
    }

    if(operador == '*'){
        resultado = valor1 * valor2;
        cout << resultado;
    }

    if(operador == '/'){
        if(valor2 == 0){
            cout << "Erro";
        }
        else{
            resultado = valor1 / valor2;
            cout << resultado;
        }
    }

}