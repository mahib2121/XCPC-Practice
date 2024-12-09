#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, x, y, h, c;
    cin >> t;
    while (t--)
    {
        cin >> h >> x >> y;
        int a = h - y;
        if (a != 0)
        {
            int b = a / x;
            if (a % x != 0)
                c = b + 2;
            else
                c = b + 1;
        }
        else
            c = 1;

        cout << c << endl;
    }
    return 0;
}