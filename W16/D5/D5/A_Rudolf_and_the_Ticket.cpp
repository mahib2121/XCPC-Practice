#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> L(n);
        vector<int> R(m);
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> L[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> R[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((L[i] + R[j]) <= k)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
