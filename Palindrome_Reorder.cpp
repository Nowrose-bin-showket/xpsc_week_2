#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    char odc;
    vector<int> fq(26, 0);
    for (char c : s)
    {
        fq[c - 'A']++;
    }

    int od = 0;
    for (int i = 0; i < 26; i++)
    {
        if (fq[i] % 2 != 0)
        {
            od++;
            odc = 'A' + i;
        }
    }
    if (od > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    string l = "", m = "";
    if (od == 1)
    {
        m += odc;
        fq[odc - 'A']--;
    }
    for (int i = 0; i < 26; i++)
    {
        l += string(fq[i] / 2, 'A' + i);
    }
    string r = l;
    reverse(r.begin(), r.end());
    cout << l + m + r;

    return 0;
}