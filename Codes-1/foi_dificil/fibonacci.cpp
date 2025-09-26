#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int term1 = 0;
    int term2 = 1;
    int id;

    for(int i = 1; i <= n+1; i++){
        cout << term1 << endl;
        id = term1 + term2;
        term1 = term2;
        term2 = id;
    }
}