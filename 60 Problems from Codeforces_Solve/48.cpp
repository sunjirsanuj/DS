#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    for (int i=0; i<t; i++){
        int a,x,y;
        cin>>a>>x>>y;
        int mi=min(x,y);
        int ma=max(x,y);
        if (a>mi and a<ma) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
