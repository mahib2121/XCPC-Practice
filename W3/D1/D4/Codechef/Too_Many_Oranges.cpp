#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k)
{
    int min = n * 10;
    int max = n * 12;
    bool flag = 0;
    if (k < min || k > max)
    {
        cout << "NO" << endl;
        return;
    }
    int diff = k - min;
    if (diff % 1 == 0 && diff <= 2 * n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    };
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }

    return 0;
}
