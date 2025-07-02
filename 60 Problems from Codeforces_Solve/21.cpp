#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char photo[n][m];
    int px=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>photo[i][j];
            if (photo[i][j] == 'W' or photo[i][j] == 'B' or photo[i][j] == 'G') px++;
        }
    }
    if (n*m == px) cout<<"#Black&White";
    else cout<<"#Color";
    return 0;
}
