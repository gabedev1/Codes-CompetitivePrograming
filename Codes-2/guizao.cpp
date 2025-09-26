#include <bits/stdc++.h>
using namespace std;
#define E and
#define OU or
#define ll long long

int main(){

    int cont = system("dir");

    //int resultado = system("dir");
    string nome = "teste.txt";
    string conteudo = to_string(cont);

    string comando = "echo " + conteudo + " > " + nome;

    system(comando.c_str());

    string abrir = "notepad" + nome;
    system(abrir.c_str());

    return 0;
}