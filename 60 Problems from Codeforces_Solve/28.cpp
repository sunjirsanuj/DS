#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int n, a_n=0, b_n=0, c_n=0, d_n=0;
        string a;
        cin>>n>>a;
        for (char ch:a){
            if (a_n != n and ch=='A') a_n++;
            else if (b_n != n and ch=='B') b_n++;
            else if (c_n != n and ch=='C') c_n++;
            else if (d_n != n and ch=='D') d_n++;
        }

        cout<<a_n+b_n+c_n+d_n<<endl;
    }
    return 0;
}
