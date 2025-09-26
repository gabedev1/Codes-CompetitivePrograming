#include <bits/stdc++.h>
using namespace std;
//#define virgula

int main() {
    int a = 0;
    int b = 0;
    string oper = " ";

    cin >> a >> b >> oper;

    float operação = 0;

    if (oper == "+"){
        operação = a+b;
    }

    else if (oper == "-"){
        operação = a - b;
    }

    else if (oper == "/"){
        operação = a / b;
    }

    else if (oper == "*"){
        operação = a*b;
    }

    if(oper == "/" && b ==0){
        cout << "Erro" << endl;
    }

    cout << operação << endl;
}
