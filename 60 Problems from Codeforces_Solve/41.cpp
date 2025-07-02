#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, s, t=0;
    cin>>n>>s;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());

    for (int i=0; i<n-1; i++) t+=a[i];

    if(t<=s) cout<<"YES";
    else cout<<"NO";
    return 0;
}
