#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool result = false;
    if(b > c) 
    {
        result = true;
    }
    else
    {
        result = false;
    }

    if ( d > a)
    {
        result = true;
    }

    else
    {
        result = false;
    }
    if(c+d > a+b)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    if(c and d > 0)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    if(a%2==0)
    {
        result = true;
    }
    else
    {
        result = false;
    }

    if(result == true)
    {
        cout << "Valores aceitos" << endl;
    }

    if(result == false)
    {
        cout << "Valores nao aceitos" << endl;
    }
}