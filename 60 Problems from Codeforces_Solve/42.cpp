#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    int f=1;

    for (int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++){
        for (int j=1; j<m; j++){
            int tem = a[i][0];
            if (tem != a[i][j]){
                f=0;
                break;
            }
        }
        if (i>0 and a[i][0]==a[i-1][0]){
            f=0;
            break;
        }
    }
    if (f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
