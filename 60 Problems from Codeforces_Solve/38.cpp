#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int n;
        string s;
        cin>>n>>s;
        int l=0;
        for (char ch:s){
            int n_l=ch-'a'+1;
            if(l<n_l) l=n_l;
        }
        cout<<l<<endl;
    }
}
