#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], r[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
        r[n-i-1] = a[i];
    }
    for (int i=0; i<n; i++) cout<<r[i]<<" ";
    return 0;
}
