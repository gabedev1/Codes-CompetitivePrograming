#include <bits/stdc++.h>
using namespace std;

signed main(){
    string n;
    int a;
    int b;
    vector<int>lista;

    for(int i = 0; i<1; ){
        cin >> n;
        if(n=="A"){
            cin >> a;
            lista.push_back(a);
            cout << a << endl;
        }

        if(n=="L"){
            if(lista.size() == 0){
                cout << "Vazio" << endl;
            }
            for(int i = 0; i<lista.size(); i++){
                cout << lista[i] <<", ";                
            }

            cout << endl;
        }

        if(n=="B"){
                cin >> b;
                if(find(lista.begin(), lista.end(), b) != lista.end()){
                    cout << "S" << endl;
                }

                else{
                    cout << "N" << endl;
                }
            }

        if(n=="S"){
            break;
        }
    }

    return 0;
}