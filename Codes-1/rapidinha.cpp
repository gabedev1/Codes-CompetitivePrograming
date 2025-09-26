#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    int lista[a];
    int reps;

    vector<int>resp;
    for(int i = 0; i<a; i++){
        cin >> reps;
        lista[i] = reps;
    }

    for(int i = 0; i<a; i++){
        if(lista[i]==lista[i+1]){
            resp.push_back(1);
        }
        if(lista[i]!=lista[i+1]){
            
        }

    }

    cout << resp << endl;

    return 0;
}