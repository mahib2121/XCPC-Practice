#include <bits/stdc++.h>
using namespace std;
int solve(int n, int a, int b)
{
    b = min(a * 2, b);
    return n / 2 * b + n % 2 * a;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        int n, a, b;
        cin >> n >> a >> b;
        cout << solve(n, a, b) << endl;
    }
    return 0;
}
