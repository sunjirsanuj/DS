#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin>>n>>k;
    int score[n];

    for (int i=0; i<n; i++){
        cin>>score[i];
    }
    for (int n:score){
        if (n>0 and n>=score[k-1]){
            count ++;
        }
    }

    cout<<count;

}
