#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;

    for (int i=0; i<n/2+1; i++){
        for (int j=n/2; j>i; j--) cout<<"*";
        for (int j=0; j<i+1; j++) cout<<"D";
        for (int j=0; j<i; j++) cout<<"D";
        for (int j=n/2; j>i; j--) cout<<"*";
        cout<<endl;
    }
    for (int i=0; i<n/2; i++){
        for (int j=0; j<i+1; j++) cout<<"*";
        for (int j=n/2; j>i; j--) cout<<"D";
        for (int j=n/2-1; j>i; j--) cout<<"D";
        for (int j=0; j<i+1; j++) cout<<"*";
        cout<<endl;
    }
    return 0;
}
