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
            cin >> v[i];

        sort(v.begin(), v.end());

        if (n == 1)
        {
            cout << "YES\n";
            continue; // Use continue instead of return
        }
        else if (n == 2)
        {
            if (v[0] == 0 || v[1] == 0 || v[0] == v[1])
            {
                cout << "YES\n"; // Remove extra space before YES
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            bool ans = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] == 0)
                {
                    continue;
                }
                else
                {
                    if (v[i] != v[i + 1])
                    {
                        ans = false;
                    }
                }
            }

            if (!ans)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}
