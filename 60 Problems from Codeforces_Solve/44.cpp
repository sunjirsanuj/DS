#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,i1,i2;
    cin>>n;
    int ar[n];
    for (int i=0; i<n; i++) cin>>ar[i];
    int min_h = INT_MAX;
    for (int i=0; i<n; i++){
        int j=(i+1)%n;
        int h_d=abs(ar[i]-ar[j]);
        if (h_d<min_h){
            min_h=h_d;
            i1=i;
            i2=j;
        }

    }
    cout<<i1+1<<" "<<i2+1;
    return 0;
}
