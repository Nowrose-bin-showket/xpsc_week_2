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
        string v, v1;
        cin >> v >> v1;
        int odd_0 = 0, even_0 = 0, odd_1 = 0, even_1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] == '1')
                    odd_1++;
                if (v1[i] == '0')
                    odd_0++;
            }
            else
            {
                if (v[i] == '1')
                    even_1++;
                if (v1[i] == '0')
                    even_0++;
            }
        }

        // cout<<odd_0<<" "<<even_0<<" "<<odd_1<<" "<<even_1<<'\n';
        // if (v == v1)
        //     cout << "YES\n";
        if (even_0 >= odd_1 && odd_0 >= even_1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}