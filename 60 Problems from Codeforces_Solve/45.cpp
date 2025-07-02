#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    int g=2, t=2;
    cout<<g<<" ";
    for(int i= 0; i<n-2; i++){
        g=g+t;
        if (g>n){
            cout<<g%n<<" ";
            g=g%n;
        }
        else cout<<g<<" ";
        t++;
    }
    return 0;
}
