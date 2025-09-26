#include <bits/stdc++.h>
using namespace std;

int main(){
int ini;
int fim;
cin >> ini >> fim;
ini++;
int cont = 0;

for(int i = ini; ;i++){
    if(ini - 1 == fim){
        cout << fim << endl;
        break;
    }
    cont += i;
    cout << i << endl;

    
    if(cont >= fim){
        break;
    }
}

}