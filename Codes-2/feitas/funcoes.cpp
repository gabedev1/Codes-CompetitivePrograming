#include <bits/stdc++.h>
using namespace std;
#define E and
#define OU or
#define ll long long

void menu(){
    cout << "Turno em que você esta?" << endl;
    cout << "1 - Manhã" << endl;
    cout << "2 - Tarde" << endl;
    cout << "3 - Noite" << endl;
}

void boas_vindas(){
    int horario;
    cin >> horario;

    if(horario == 1){
        cout << "Bom Dia! \n";
    }

    else if(horario == 2){
        cout << "Boa Tarde! \n";
    }

    else if(horario == 3){
        cout << "Boa Noite! \n";
    }

    else{
        cout << "Entrada não válida\n";
    }
}

int main(){
    menu();
    boas_vindas();
    cout << "Encerrando...\n";
}