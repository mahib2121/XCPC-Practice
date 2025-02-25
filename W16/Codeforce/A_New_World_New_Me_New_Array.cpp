#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;

        if (k < -n * p || k > n * p)
        {
            cout << "-1" << endl;
            continue;
        }

        if (k == 0)
        {
            cout << "0" << endl;
            continue;
        }

        int min_ops = (abs(k) + p - 1) / p;

        if (min_ops > n)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << min_ops << endl;
        }
    }
    return 0;
}
