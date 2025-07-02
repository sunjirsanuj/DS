#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int skill[4];
        for (int j=0; j<4; j++) cin>>skill[j];
        int f_p1 = max(skill[0],skill[1]);
        int f_p2 = max(skill[2],skill[3]);
        if(f_p1 < min(skill[2],skill[3]) or f_p2 < min(skill[0],skill[1])) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
