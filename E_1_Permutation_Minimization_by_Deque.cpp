#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        deque<int> dq;
        for (auto x : v)
        {
            if (dq.empty())
                dq.push_back(x);
            else if (dq.front() > x)
                dq.push_front(x);
            else
                dq.push_back(x);
        }
        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << "\n";
    }
    return 0;
}