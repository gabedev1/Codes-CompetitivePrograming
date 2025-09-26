#include <bits/stdc++.h>
using namespace std;

int main (){
    int num1;
    int num2;

    cin >> num1 >> num2;

    if(num1>num2){
        swap(num1, num2);
    }

    for (int i = num1; i<=num2; ++i){
        cout << i << " ";
    }
}


    
