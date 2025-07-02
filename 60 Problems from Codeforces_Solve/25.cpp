#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int r = min({c/4,b/2,a});
    cout<<1*r+2*r+4*r;
    return 0;
}
