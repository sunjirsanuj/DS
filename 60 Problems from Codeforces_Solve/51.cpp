#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    int c=0, b=0, ba=0;
    vector <int> tr(n);
    for (int i=0; i<n; i++) cin>>tr[i];
    for (int i=0; i<n; i++){
        if (i%3==0)  c+=tr[i];
        else if (i%3==1) b+=tr[i];
        else ba+=tr[i];
    }
    int m=max({c, b, ba});
    if (m==c) cout<<"chest";
    else if (m==b) cout<<"biceps";
    else if (m==ba) cout<<"back";
}
