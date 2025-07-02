#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        string aa;
        cin>>aa;

        int sum = (aa[0]-'0')+(aa[2]-'0');
        cout<<sum<<endl;
    }
    return 0;
}
