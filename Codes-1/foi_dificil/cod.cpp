#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int lista[a];

    int resp = 0;

    for(int i = 0; i<a; i++){
        cin >> lista[i];
    }
    for(int i = 0; i<=a-3; i++){
        if(lista[i] == 1 and lista[i+1] == 0 and lista[i+2] == 0){
            resp = resp + 1;
        }
        
    }
    
    cout << resp << endl;
}