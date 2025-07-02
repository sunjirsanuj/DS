#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int n,a,b,total = 0;
        cin>>n>>a>>b;

        if ((float)b/2<a) total += (n/2)*b + (n%2)*a;
        else total += n*a;

        cout<<total<<endl;
    }

    return 0;
