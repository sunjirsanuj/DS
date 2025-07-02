#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int n;
        long long total = 0;
        cin>>n;
        vector<long long> a(n);
        for (int j=0; j<n; j++) cin>>a[j];
        long long mi = *min_element(a.begin(), a.end());
        for (int j=0; j<n; j++){
            if (mi<a[j]) total += a[j]-mi;
        }

        cout<<total<<endl;
    }
    return 0;
}
