#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>lista;
    priority_queue<int>fila_pq;

    int a;

    for (int i; 1<2; i++){
        cin >> a;
        lista.push_back(a);

        if (a==0){
            break;
        }
    }

    for (int i = 0; i < lista.size(); i++){
        fila_pq.push(lista[i]);

    }

        cout << fila_pq.top() << endl;
}