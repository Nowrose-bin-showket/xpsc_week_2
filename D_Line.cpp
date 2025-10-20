#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    while (n--)
    {
        ll a;
        cin >> a;
        string s;
        cin >> s;
        vector<char> v(a);
        queue<int> q;
        ll total = 0;
        for (ll i = 0; i < a; i++)
        {
            v[i] = s[i];
            v.push_back(s[i]);
        }
        ll l = 0, r = a - 1;
        while (l < r)
        {
            if (v[l] == 'L')
                q.push(l);
            if (v[r] == 'R')
                q.push(r);
            l++;
            r--;
        }
        for (ll i = 0; i < a; i++)
        {
            if (v[i] == 'L')
                total += i;
            else
            {
                total += (a - i - 1);
            }
        }
        for (ll i = 0; i < a; i++)
        {
            if (!q.empty())
            {
                if (q.front() <= (a - 1) / 2)
                {
                    total += (a - 1 - q.front());
                    total -= q.front();
                    cout << total << " ";
                    q.pop();
                }
                else
                {
                    total += q.front();
                    total -= (a - 1 - q.front());
                    cout << total << " ";
                    q.pop();
                }
            }
            else
                cout << total << " ";
        }
        cout << '\n';
    }
}

//  if (s[i] == 'L')
//     {
//         total += i;
//     }
//     else
//         total += a - i - 1;
//         cout << total;
//     int l = 0, r = n - 1;
//     int m = n / 2;
//     for (int i = 1; i < m; i++)
//     {
//         if (i % 2 == 0)
//         {
//             s[i] = 'R';
//             total += i;
//         }
//         else
//         {
//             s[i] = 'L';
//             total += a - i - 1;
//         }
//     }
//     v.push_back(total);
//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
//     cout << '\n';
//     }
//     return 0;
// }
/*
Neamul Haq
University of Barisal
*/
/*#include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define umap unordered_map<ll, ll> m;
#define map map<ll, ll> m;
    int const mod = 1e9 + 7;
    const ll inf = 1e18;
    const ll N = 1e3;
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define all(x) (x).begin(), (x).end()
    void solve();

    int main()
    {
        fast()
            ll t = 1;
        cin >> t;
        while (t--)
            solve();
    }

    void solve()
    {
        ll n, ans = 0;
        cin >> n;
        vector<char> a(n);
        queue<ll> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 0, r = n - 1;
        while (l < r)
        {
            if (a[l] == 'L')
                q.push(l);
            if (a[r] == 'R')
                q.push(r);
            l++;
            r--;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'L')
                ans += (i);
            else
            {
                ans += (n - i - 1);
            }
        }
        // cout << ans << ndl;

        for (int i = 0; i < n; i++)
        {
            if (!q.empty())
            {
                if (q.front() <= ((n - 1) / 2))
                {
                    ans += (n - 1 - q.front());
                    ans -= q.front();
                    cout << ans << " ";
                    q.pop();
                }
                else
                {
                    ans += q.front();
                    ans -= (n - 1 - q.front());
                    cout << ans << " ";
                    q.pop();
                }
            }
            else
            {
                cout << ans << " ";
            }
        }
        cout << ndl;
    }*/