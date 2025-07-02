#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i=0; i<t; i++){
        int a, b;
        cin>>a>>b;
        int min_v = (b-a);
        for (int c=a; c<=b; c++){
            int n = (c-a) + (b-c);
            if (n<min_v) min_v = n;
        }

        cout<<min_v<<endl;

    }
}
