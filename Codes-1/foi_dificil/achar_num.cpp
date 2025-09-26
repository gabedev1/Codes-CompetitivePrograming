#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int listaa[10];

    for(int i = 0; i<10; i++){
        cin >> listaa[i];
    }

    cin >> x;

    bool achar = false;


    for (int j = 0; j<10; j++){


        if(listaa[j] == x){

            achar = true;
            break;
        }
    }

    if(achar == true){
        cout << "SIM" << endl;
    } 
    
    
    else {
        cout << "NAO" << endl;
    }

    return 0;
}