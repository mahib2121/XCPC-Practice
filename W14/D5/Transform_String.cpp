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
        string A, B;
        cin >> A >> B;

        int i = 0, j = 0;
        int n = A.size();
        int m = B.size();

        while (i < n && j < m)
        {
            if (A[i] == B[j])
            {
                j++;
            }
            i++;
        }

        if (j < m)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> ib;
        i = n - 1;

        for (int k = m - 1; k >= 0; k--)
        {
            while (A[i] != B[k])
                i--;
            ib.push_back(i + 1);
            i--;
        }

        int total_cost = m * n + n - m - (m * (m - 1)) / 2;
        for (int idx : ib)
        {
            total_cost -= idx;
        }

        cout << total_cost << endl;
    }

    return 0;
}
