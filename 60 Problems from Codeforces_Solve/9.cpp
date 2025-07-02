#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0;
    cin>>n;
    int ar[n];

    for (int i=0; i<n; i++) cin>>ar[i];
    int mx = ar[0], mi = ar[0];
    for (int i=1; i<n; i++){
        if (mx<ar[i]){
            mx = ar[i];
            c++;
        }
        if (mi>ar[i]){
            mi = ar[i];
            c++;
        }
    }

    cout<<c;
    return 0;
}
