#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    unordered_set<ll> s(n);
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
