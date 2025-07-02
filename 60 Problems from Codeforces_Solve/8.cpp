#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int n, k, g=0, f=0;
        cin>>n>>k;

        for (int j=0; j<n; j++){
            int a;
            cin>>a;

            if (a>=k) g += a;
            else if (a==0 and g>0){
                g--;
                f++;
            }
        }
        cout<<f<<endl;
    }


    return 0;
}
