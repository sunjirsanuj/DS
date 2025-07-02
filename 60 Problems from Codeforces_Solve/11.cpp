#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        string a;
        int a_c = 0,b_c = 0;
        cin>>a;

        for (char c:a){
            if (c == 'A') a_c++;
            else b_c++;
        }
        if (a_c>b_c) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}
