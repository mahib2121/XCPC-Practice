#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int ans = 4 * n * m;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (i == 0)
            {
                continue;
            }
            ans -= 2 * (m - a + m - b);
        }
        cout << ans << endl;
    }
    return 0;
}
