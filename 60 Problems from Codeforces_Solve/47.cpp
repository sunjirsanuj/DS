#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    for (int i=0; i<s1.size(); i++){
        int pos1=s1[i]-'0', pos2=s2[i]-'0';
        cout<<abs(pos1-pos2);
    }
}
