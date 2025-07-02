#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int h, m;
        cin>>h>>m;
        int r = (23-h)*60 + (60-m);

        cout<<r<<endl;
    }
    return 0;
}
