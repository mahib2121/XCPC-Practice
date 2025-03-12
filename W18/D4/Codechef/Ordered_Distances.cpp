#include <bits/stdc++.h>
using namespace std;

bool cmpPair(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}

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
        vector<int> X(n), Y(n);

        for (int i = 0; i < n; i++)
        {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> Y[i];
        }

        int valid = -1;
        for (int i = 0; i < n; i++)
        {
            int pivot = X[i];
            vector<pair<int, int>> pairs(n);

            for (int j = 0; j < n; j++)
            {
                pairs[j] = {abs(X[j] - pivot), X[j]};
            }

            sort(pairs.begin(), pairs.end(), cmpPair);

            bool ok = true;
            for (int j = 0; j < n; j++)
            {
                if (pairs[j].second != Y[j])
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                valid = i + 1;
                break;
            }
        }
        cout << valid << endl;
    }
    return 0;
}
