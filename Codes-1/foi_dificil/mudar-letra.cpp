#include <bits/stdc++.h>
using namespace std;

int main(){
    string letra;
    int n;
    cin >> letra >> n;

    string resp = letra;

    for(int i = 0; i < letra.size(); i++)
    {
        resp[i] = letra[i] + n;
        if(resp[i] > 'z'){
            resp[i] = char((letra[i] -  26) + n);
        }
    }

    cout << resp << endl; 

    return 0;
}