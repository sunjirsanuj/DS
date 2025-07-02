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
    int n,m;
    cin>>n>>m;
    vector<int>an(n), am(m);
    vector <int> r;
    for (int i=0; i<n; i++) cin>>an[i];
    for (int i=0; i<m; i++) cin>>am[i];
    for (int i=0; i<n; i++){
        int t=an[i];
        for (int j=0; j<m; j++){
            if (t==am[j]) r.push_back(t);
        }
    }
    for (int i:r) cout<<i<<" ";

    return 0;
}
