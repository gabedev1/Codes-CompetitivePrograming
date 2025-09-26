#include <bits/stdc++.h>
using namespace std;

int main (){
    int d1 = 0;
    int d2 = 0;
    int seq = 0;

    cin >> d1 >> d2 >> seq;

    int pa = (d1 - d2)*-1;
    int id = 0;

    for(int i = 0; i<seq; i++){
        id = pa+d1;
        d1 = id;

        cout << d1 - pa << endl;
    }

}