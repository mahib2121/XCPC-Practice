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
        // number of cars, the number of power outlets, and the number of hours respectively.
        int n, m, h;
        cin >> n >> m >> h;
        // energy capacities (in Watt-hour) of the cars ;
        vector<int> a(n);
        vector<int> b(m);

        // the power (in Watt) of the power outlet
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());

        long long result  = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            result  +=min( 1ll * b[i]* h, 1ll * a[i]);
        }
        cout << result  << endl;
    }
    return 0;
}
