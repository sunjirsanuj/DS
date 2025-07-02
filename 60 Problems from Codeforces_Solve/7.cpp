#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a1;
    int f = 0;
    cin>>a1;

    for (int i=0; i<5; i++){
        string a2;
        cin>>a2;

        if (a1[0] == a2[0] || a1[1] == a2[1]) f=1;
    }

    if (f) cout<<"YES";
    else cout<<"NO";
}
