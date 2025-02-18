#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        long idx(0), cnt(0);
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == a[idx])
            {
                ++cnt;
                ++idx;
            }
            if (idx >= a.size())
            {
                break;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
