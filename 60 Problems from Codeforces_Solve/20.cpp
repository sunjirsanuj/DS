#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string code;
    cin>>code;
    vector<int> k;
    int f = 0;
    for (int i=0; i<n; i++){
        if (code[i] != 'W'){
            f++;
        }
        else{
            if (f>0) k.push_back(f);
            f=0;
        }
    }
    if (f>0) k.push_back(f);

    cout<<k.size()<<endl;
    for (int n:k) cout<<n<<" ";
    return 0;
}
