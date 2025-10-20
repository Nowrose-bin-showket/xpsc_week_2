#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    bool rev = true;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    deque<ll> dq;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            dq.push_front(v[i]);
        else
            dq.push_back(v[i]);
        rev = !rev;
    }
    if (!rev)
        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
    else
    {
        reverse(dq.begin(), dq.end());
        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
    }

    return 0;
}