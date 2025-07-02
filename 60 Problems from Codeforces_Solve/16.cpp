#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,m, c;
    cin>>n>>m;

    for (int i=n+1; i<=m; i++){
        int f = 1;
        for (int j=2; j<i; j++){
            if (i%j == 0){
                f=0;
                break;
            }
        }
        if (f){
            c = i;
            break;
        }
    }
    if (c == m) cout<<"YES";
    else cout<<"NO";
    return 0;
}
