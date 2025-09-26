#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;

    int Ma[3];
    int Mb[3];
    
    for (int i = 0; i<3; i++){
        cin >> a;
        Ma[i] = a;
    }
    for (int i = 0; i<3; i++){
        cin >> b;
        Mb[i] = b;
    }

    for(int i = 0; i<3; i++){
        if(Ma[i]>Mb[i]){
            cout << "A" << endl;

            break;
        }

        if(Mb[i]>Ma[i]){
            cout << "B" << endl;

            break;
        }
    }

    return 0;
}