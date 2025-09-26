#include <bits/stdc++.h>
#include <Windows.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#define E and
#define OU or
#define ll long long

int main(){
    system("COLOR 0e");
    system("cls");
    printf("\e[?251]");


    SetConsoleCP(437);
    SetConsoleOutputCP(437);

    int barra1 = 221;
    int barra2 = 220;

    cout << "\n\tCarregando...";
    cout << "\n\n\n\n\t\t\t\t";

    for(int i = 0; i<30; i++){
        cout << (char)barra1;
    }

    cout << "\r";
    cout << "\t\t\t\t";
    for(int i = 0; i<30; i++){
        cout << (char)barra2;
        Sleep(300);
    }

    cout << "\t\t\t\t" << (char)1;
    system("Pause");

    return 0;
}