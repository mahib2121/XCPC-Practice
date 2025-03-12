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
        int x, y, k;
        cin >> x >> y >> k;

        int diff = abs(x - y);

        if (diff == k)
        {
            cout << "0" << endl;
        }
        else if (diff > k)
        {

            if ((diff - k) % 2 == 0)
            {
                cout << (diff - k) / 2 << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            if ((k - diff) % 2 == 0)
            {
                cout << (k - diff) / 2 << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}
