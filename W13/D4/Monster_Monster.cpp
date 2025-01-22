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
        long long int  b;
        cin >> n >> b;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(),greater<long long int >());
        long long int max1 = 0;
        for (int i = 0; i < n; i++)
        {
            long long k = a[i] + i * b;
            max1 = max(max1, k);
        }
        cout << max1 << endl;
    }
    return 0;
}
