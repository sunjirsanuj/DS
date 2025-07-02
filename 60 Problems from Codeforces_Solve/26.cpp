#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    for (int i=0; i<t; i++){
        string a, r;
        getline(cin, a);
        r += a[0];
        for (int j=0; j<a.size(); j++){
            if (a[j]==32) r += a[j+1];
        }
        cout<<r<<endl;
    }
    return 0;
}
