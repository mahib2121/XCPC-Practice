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
        int x, y;
        cin >> x >> y;
        int even = x / 2;
        int odd = x - even;

        if (y % 2 == 0)
        {

            cout << even - 1 << endl;
        }
        else
        {

            cout << odd - 1 << endl;
        }
    }

    return 0;
}
