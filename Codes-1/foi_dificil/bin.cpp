#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    vector<int>lista;

    if(num==0){
        lista.push_back(0);
    }
    while(num > 0){
        lista.push_back(num % 2);
        num /= 2;
    }

    for(int i = lista.size() - 1; i>=0; i--){
        cout << lista[i];
    }
}