#include <bits/stdc++.h>
using namespace std;
#define E and
#define OU or
#define ll long long

int main(){
    int numero;
    int horas_trab;
    float valor_hora;

    cin >> numero >> horas_trab >> valor_hora;

    cout << "NUMERO = " << numero << endl << "SALARIO = R$ " << setprecision(2) << fixed << horas_trab * valor_hora;
}