#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,f=1;
    cin>>n;
    string t;
    cin>>t;

    int s1=0, s2=0;
    for(int j=0; j<n; j++){
        char p=t[j];
        if (p!='4' and  p!='7'){
            f=0;
            break;
        }
        int d=p-'0';
        if (j<n/2) s1+=d;
        else s2+=d;
    }
    if (f and s1==s2){
        cout<<"YES";
    }
    else cout<<"NO";
}
