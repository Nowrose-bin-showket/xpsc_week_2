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
        int m;
        cin >> m;
        int cnt = 0;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];
        set<int> st;
        for (int i = m - 1; i >= 0; i--)
        {
            if (st.count(v[i]))
                break;
            st.insert(v[i]);
            cnt++;
        }
        cout << m - cnt << '\n';
    }
    return 0;
}