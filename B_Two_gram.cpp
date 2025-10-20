#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            mp[s.substr(i, 2)]++;
        }
    }
    string p;
    int mx = 0;
    for (auto x : mp)
    {
        if (x.second > mx)
        {
            mx = x.second;
            p = x.first;
        }
    }
    cout << p << '\n';
    return 0;
} // if (n == 2)
  // {
  //     cout << s;
  //     return 0;
  // }
  //  if (n == 3)
  // {
  //     cout << s.substr(0,2);
  //     return 0;
  // }