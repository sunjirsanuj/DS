#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int j=0; j<n; j++) cin>>a[j];
        vector <pair<int, string>> b(n);
        for (int j=0; j<n; j++) cin>>b[j].first>>b[j].second;

        for (int j=0; j<n; j++){
            for (int k=0; k<b[j].first; k++){
                if (b[j].second[k] == 'D'){
                    if (a[j]==9) a[j]=0;
                    else a[j] += 1;
                }
                else if (b[j].second[k] == 'U'){
                    if (a[j]==0) a[j]=9;
                    else a[j] -= 1;
                }
            }
        }

        for (int j:a) cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}
