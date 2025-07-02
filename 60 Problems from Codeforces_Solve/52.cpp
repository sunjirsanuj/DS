#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,k,f=0;
    cin>>n>>k;

    for (int i=0; i<n; i++){
        string a;
        cin>>a;
        int c=0;

        for (char ch:a){
            if (ch=='4' or ch=='7') c++;
        }
        if (c<=k) f++;
    }

    cout<<f<<endl;
}
