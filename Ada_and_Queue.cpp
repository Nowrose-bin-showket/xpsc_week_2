#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> dq;
    int x = 0;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "front")
        {
            if (dq.empty())

                cout << "No job for Ada?\n";

            else if (x == 1)
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (s == "back")
        {
            if (dq.empty())

                cout << "No job for Ada?\n";

            else if (x == 0)
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (s == "reverse")

            x = !x;

            else if (s == "push_back")
        {
            int n;
            cin >> n;
            if (x == 0)
            {
                dq.push_back(n);
            }
            else
            {
                dq.push_front(n);
            }
        }
        else
        {
            int n;
            cin >> n;
            if (x == 1)
            {
                dq.push_back(n);
            }
            else
            {
                dq.push_front(n);
            }
        }
    }
    return 0;
}