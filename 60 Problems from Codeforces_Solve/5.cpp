#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int n;
        string a;
        cin>>n>>a;

        set<char> com;
        char cu = a[0];
        int sus = 0;

        for (int j=1; j<n; j++){
            if (cu != a[j]){
                com.insert(cu);
                if (com.find(a[j]) != com.end()){
                    sus = 1;
                    break;
                }
                cu = a[j];
            }
        }
        if (sus) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
