#include <bits/stdc++.h>
using namespace std;

signed main(){
    int min;
    int max;

    cin >> min >> max;

    for(int i = min+1; i<=max; i++){
        for(int j = min+1; j<=i; j++){
            int resp = j%i;
            if(resp!=0){
                cout << i;
            }
        }
    }
}