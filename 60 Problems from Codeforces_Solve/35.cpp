#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;

    int f_ch = a[0];
    if (f_ch >= 97 and f_ch <= 122){
        a[0] = f_ch - 32;
    }

    cout<<a;
}
