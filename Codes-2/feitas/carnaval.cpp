#include <bits/stdc++.h>
using namespace std;
#define E and
#define OU or
#define ll long long

int main(){
    vector<float>lista;
    float n;

    for(int i = 0; i<5; i++){
        cin >> n;
        lista.push_back(n);
    }

    sort(lista.begin(), lista.end());

    lista.erase(lista.begin());
    lista.pop_back();

    float resp = 0;

    for(int i = 0; i<lista.size(); i++){
        resp = lista[i] + resp;
    }

    cout << setprecision(1) << fixed << resp << endl;
}