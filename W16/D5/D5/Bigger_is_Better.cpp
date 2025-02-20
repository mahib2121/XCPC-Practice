#include <bits/stdc++.h>
using namespace std;

int main()
{
    auto check = [](int n, const string &x)
    {
        string p = "";
        for (int i = 0; i < n; i++)
        {
            p += 'z';
        }
        if (p > x)
        {
            cout << p << endl;
            return;
        }
        cout << -1 << endl;
    };

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;
        check(n, x);
    }

    return 0;
}
