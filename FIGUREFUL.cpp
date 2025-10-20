#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<pair<int, int>, string> mp;
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        string c;
        cin >> a >> b >> c;
        mp[{a, b}] = c;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << mp[{l, r}] << '\n';
    }
    return 0;
}