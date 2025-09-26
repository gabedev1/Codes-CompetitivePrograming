#include <bits/stdc++.h>
using namespace std;

signed main(){
    int lista[3];

    for(int i = 0; i<3; i++){
        cin >> lista[i];
    }

    map<string, int>mapinha;

    for(int i = 0; i<3; i++){
        string cavalo = to_string(i);
        int tempo = lista[i];

        mapinha.insert(make_pair(cavalo, tempo));
    }

    sort(mapinha.begin(), mapinha.end());

    map<char, int>::allocator_type it;
    for(it = mapinha.begin(); it != mapinha.end(); it++){
        cout << it -> mapinha << endl;
    }
    
}