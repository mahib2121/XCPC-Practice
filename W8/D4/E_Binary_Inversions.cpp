#include <bits/stdc++.h>
using namespace std;

long long Inversions(const vector<int> &v, int n)
{
    long long result = 0, oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            oneCount++;
        }
        else
        {
            result += oneCount;
        }
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

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

        long long maxInversions = Inversions(v, n);
        int modifiedIndex = -1;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                v[i] = 1;
                modifiedIndex = i;
                break;
            }
        }
        maxInversions = max(maxInversions, Inversions(v, n));

        if (modifiedIndex != -1)
        {
            v[modifiedIndex] = 0;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                v[i] = 0;
                break;
            }
        }
        maxInversions = max(maxInversions, Inversions(v, n));

        cout << maxInversions << endl;
    }
    return 0;
}
