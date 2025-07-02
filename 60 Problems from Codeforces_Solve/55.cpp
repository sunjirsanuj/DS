#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    char ar[n][n];
    int c=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i%2==0){
                if (j%2==0){
                    ar[i][j]='C';
                    c++;
                }
                else ar[i][j]='.';
            }
            else {
                if (j%2==0) ar[i][j]='.';
                else{
                    ar[i][j]='C';
                    c++;
                }
            }
        }
    }
    cout<<c<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) cout<<ar[i][j];
        cout<<endl;
    }
    return 0;
}
