#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    int r=n-10, s=0;
    if (r>=2 and r<=9) s+=4;
    else if(r==10) s+=15;
    else if (r==1 or r==11) s+=4;

    cout<<s;
}
