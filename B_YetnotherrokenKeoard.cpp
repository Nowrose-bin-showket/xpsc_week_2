#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        vector<pair<int, char>> lw, up;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b' && !lw.empty())
                lw.pop_back();
            else if (islower(s[i]) && s[i] != 'b')
                lw.push_back({i, s[i]});
            else if (s[i] == 'B' && !up.empty())
                up.pop_back();
            else if (isupper(s[i]) && s[i] != 'B')
                up.push_back({i, s[i]});
        }
        vector<pair<int, char>> merged = lw;
        merged.insert(merged.end(), up.begin(), up.end());
        sort(merged.begin(), merged.end());
        for (auto [x, y] : merged)
        {
            cout << y;
        }
        cout << '\n';
    }
    return 0;
}