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
        long long int a[n + n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                long long int x;
                cin >> x;
                a[n + i - j] = min(a[n + i - j], x);
            }
        }
        long long int ans = 0;
        for (int i = 0; i < n + n; i++)
        {
            if (a[i] < 0)
                ans += -a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
