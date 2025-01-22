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
        int n, x; 
        cin >> n >> x;

        vector<int> a(n);
        int totalWater = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; 
            totalWater += a[i];
        }

        int mB = (totalWater + x - 1) / x; 
        cout << mB << endl;
    }

    return 0;
}
