#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b;
    cin>>t;

    for (int i=0; i<t; i++){
        int count = 0;
        cin>>n;

        for (b=1; b<n+1; b++){
            a = n-b;
            if (a>0 and a+b == n){
                count ++;
            }
        }
        cout<<count<<endl;
    }


}
