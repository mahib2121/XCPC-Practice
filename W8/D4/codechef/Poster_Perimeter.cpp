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
        int n, m, k;
        cin >> n >> m >> k;
        int dif = 1e9;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                
                int Perimeter = 2 * (j + i);

                dif = min(dif,abs(Perimeter - k));
            }
        }
        cout << dif << endl;
    }

    return 0;
}
