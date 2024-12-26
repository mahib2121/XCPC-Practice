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
        int h, l, w;
        cin >> h >> l >> w;
        long long int x = 0;
        long long t = 2 * ((h * l) + (l * w) + (w * h));
        x = 1000 / t;
        cout << x << endl;
    }

    return 0;
}
