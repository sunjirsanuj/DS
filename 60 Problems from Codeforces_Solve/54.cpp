#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string oa, ta;
    cin>>oa>>ta;

    int total=0;

    for (int i=0; i<n; i++) {
        int o=oa[i]-'0';
        int t=ta[i]-'0';
        int diff=abs(o-t);
        total += min(diff, 10-diff);
    }

    cout<<total<<endl;
    return 0;
}
