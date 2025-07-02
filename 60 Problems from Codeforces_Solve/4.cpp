#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        ar[x-1] = i+1;
    }

    for (int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
}
