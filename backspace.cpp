#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    deque<char> dq;
    for (auto x : s)
    {
        if (x == '<')
        {
            if (!dq.empty())
                dq.pop_back();
        }
        else
            dq.push_back(x);
    }
    while (!dq.empty())
    {
        cout << dq.front();
        dq.pop_front();
    }
    return 0;
}