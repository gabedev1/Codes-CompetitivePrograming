#include <bits/stdc++.h>
using namespace std;

signed main(){
    vector<double>lista(10);
    double a;
    double resp;

    for(int i = 0; i<10; i++){
        cin >> lista[i];
    }

    sort(lista.begin(), lista.end());

    cout << lista[0] << endl;
    cout << lista[9] << endl;

    for(int i = 0; i<10; i++){
        a = a + lista[i];
    }

    resp = a/10;

    cout << fixed << setprecision(2) << resp;
}