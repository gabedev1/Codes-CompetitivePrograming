#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>lista(10);
    int a;


    for(int i = 0; i<10; i++){
        cin >> a;
        lista[i] = a;
    }

    sort(lista.begin() , lista.end());

    for(int i = 0; i<lista.size(); i++){
        cout << lista[i] << endl;
    }
}