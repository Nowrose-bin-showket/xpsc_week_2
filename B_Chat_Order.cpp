#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, int> mp;
    vector<pair<int,string>> v;
    for (int i = n - 1; i >= 0; i--)
    {
        string s;
        cin >> s;
        mp[s]=i;
        // mp[{s, i}] = true;
    }
    for (auto [x, y] : mp)
    {
        v.push_back({y,x});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << "\n";
    }
    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k, x;
//         cin >> n >> k >> x;
//         int x1 = 0;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             if (i == x)
//             {
//                 v[i] = k + i * 100;
//                 // cout<<v[i]<<'\n';
//                 x1 = v[i];
//                 // cout<<x1<<'\n';
//             }
//         }
//         bool flag = false;
//         int a = 0;
//         sort(v.begin(), v.end());
//         for (int i = 0; i < n; i++)
//         { // cout<<v[i]<<" ";
//             if (v[i] == x1)
//             {
//                 flag = true;
//                 a = i + 1;
//                 break;
//                 x1 = 0;
//             }
//         }
//         if (flag == true)
//             cout << a << '\n';
//         else
//             cout << n + 1 << '\n';
//     }
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tst;
//     cin >> tst;
//     while (tst--)
//     {
//         int n, x, k;
//         cin >> n >> x >> k;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         sort(v.begin(), v.end(), greater<>());
//         x = x + (k * 100);
//         int cnt = 0;
//         for (int i = 0 + k; i < n; i++)
//         {
//             if (v[i] > x)
//                 cnt++;
//         }
//         cout << cnt + 1 << '\n';
//     }
//     return 0;
// }
