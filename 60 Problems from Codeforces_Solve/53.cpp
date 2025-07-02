include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    ll sum = 0;

    for (int i = 0; i < n - 1; i++) {
        int episode;
        cin >> episode;
        sum += episode;
    }

    ll total = 1LL * n * (n + 1) / 2;
    cout << total - sum << endl;
    return 0;
}
