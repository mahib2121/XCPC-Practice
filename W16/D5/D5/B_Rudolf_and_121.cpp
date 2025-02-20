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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool possible = true;

        for (int i = 0; i < n - 2; i++)
        {
            if (v[i] == 0)
                continue;
            if (v[i] < 0)
            {
                possible = false;
                break;
            }
            v[i + 1] -= 2 * v[i];
            v[i + 2] -= v[i];
        }

        if (possible && v[n - 2] == 0 && v[n - 1] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
