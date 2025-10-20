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
        int a;
        cin >> a;
        string s;
        cin >> s;
        set<char> st;
        for (auto x : s)
        {
            st.insert(x);
        }
        vector<int> v;
        for (auto a : st)
        {
            v.push_back(a);
        }
        map<char, char> mp;
        int l = 0, r = v.size() - 1;
        while (l < r||l==r)
        {
            mp[v[l]] = v[r];
            mp[v[r]] = v[l];
            l++, r--;
        }
        string b = "";
        for (int i = 0; i < a; i++)
        {
            b += mp[s[i]];
        }
        cout << b << '\n';
    }
    return 0;
}