#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> coin(n);

        for (int i = 0; i < n; i++)
        {
            coin[i] = pow(2, i + 1);
        }

        long long total = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i < n - x)
            {
                total -= coin[i];
            }
            else
            {
                total += coin[i];
            }
        }

        cout << total << endl;
    }

    return 0;
}
