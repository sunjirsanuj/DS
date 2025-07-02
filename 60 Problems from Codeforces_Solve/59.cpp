#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*void solve(){

}*/

int main()
{
    /*int t;
    cin>>t;
    while(t--) solve();*/
    int n,c=0;
    cin>>n;
    vector <int> a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    for (int i=0; i<n; i++){
        int max_v=0;
        for (int j=0; j<n; j++){
            if (a[i]==a[j]) max_v++;
        }
        if (c<max_v) c=max_v;
    }

    cout<<c;

    return 0;
}
