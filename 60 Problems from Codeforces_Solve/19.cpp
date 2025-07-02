#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        int f;

        for (int j=0; j<n; j++){
            cin>>a[j];
        }
        if (a[0] != a[1] and a[0] != a[2]) cout<<1<<endl;
        else {
            for (int k=1; k<n; k++){
                if (a[0] != a[k]) f = k;
            }
            cout<<f+1<<endl;
        }
    }
