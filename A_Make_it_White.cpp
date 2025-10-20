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
        int a;
        cin >> a;
        string s;
        cin >> s;
        int fp = -1, lp = -1;
        fp = s.find('B');
        lp = s.rfind('B');
        cout << lp - fp + 1 << '\n';
    }
    return 0;
}