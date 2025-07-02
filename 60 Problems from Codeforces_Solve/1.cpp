#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int f = 0;
        if (a<b) f++;
        if (a<c) f++;
        if (a<d) f++;

        cout<<f<<endl;
    }
}
