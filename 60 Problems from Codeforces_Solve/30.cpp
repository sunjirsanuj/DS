#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n];
    for (int i=0; i<n; i++) cin>>p[i];
    int a, b, sum = 0;
    cin>>a>>b;

    for (int i=a; i<=b; i++) sum += p[i];
    cout<<sum;
    return 0;
}
