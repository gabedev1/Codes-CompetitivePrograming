#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int fat = 1;

    cin >> n;
    
    for(int i = 1; i<=n; i++){
        fat*= i;
    }

    cout << fat << endl;
}