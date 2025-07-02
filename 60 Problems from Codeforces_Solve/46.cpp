#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    getline(cin, s);

    char l_l;
    for (int i=s.size()-1; i>=0; i--){
        if ((s[i]>=65 and s[i]<=90) or (s[i]>=97 and s[i]<=122)){
            if (s[i]>=97 and s[i]<=122){
                l_l=s[i];
                break;
            }
            else if (s[i]>=65 and s[i]<=90){
                l_l=s[i]+32;
                break;
            }
        }
    }
    if (l_l=='a' or l_l=='e' or l_l=='i' or l_l=='o' or l_l=='u' or l_l=='y') cout<<"YES";
    else cout<<"NO";
    return 0;
}
