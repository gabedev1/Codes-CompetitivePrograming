#include <bits/stdc++.h>
using namespace std;

signed main(){
    int p;
    int fases;
    int pf = 0;
    
    cin >> p;
    cin >> fases;

    for(int i = 0; i<fases; i++){
        if( p > 100){
            p = 100;
        }

        if( p < 0){
            p = 0;
        }

        cin >> pf;
        p = p + pf;


    }

    cout << p;

    return 0;
}