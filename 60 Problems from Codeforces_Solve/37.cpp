#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t; //total test case input newa hoise

    for (int i=0; i<t; i++){
        string s;
        char ch;
        /* 2d array te 64 ta element ache, tai 64 bar loop cholbe*/
        for (int j=0; j<64; j++){
            cin>>ch;
            /*jodi input charecter small letter hot taile string e
            store hobe*/
            if (ch >= 'a' and ch <= 'z') s+=ch;
        }
        cout<<s<<endl;
    }
}
