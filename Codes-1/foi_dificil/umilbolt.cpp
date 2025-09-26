#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float temp;
    cin >> n;
    vector<float>lista(n);

    for(int i = 0; i<n; i++){
        cin >> temp;
        lista[i]=temp;
    }

    sort(lista.begin(), lista.end());

    cout << lista[0] << endl;
}