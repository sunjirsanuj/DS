#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*void solve(){

}*/

int main()
{
    /*int t;
    cin>>t;
    while(t--) solve();*/
    int n;
    cin>>n;
    map<string, string>gemMap={
        {"purple", "Power"},
        {"green", "Time"},
        {"blue", "Space"},
        {"orange", "Soul"},
        {"red", "Reality"},
        {"yellow", "Mind"}
    };

    for (int i = 0; i < n; i++) {
        string color;
        cin >> color;
        gemMap.erase(color);
    }

    cout << gemMap.size() << endl;

    for (auto it : gemMap) {
        cout << it.second << endl;
    }

    return 0;
}
