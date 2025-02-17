#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int mm = (y + 1) / 2;
        x -= (mm * 15 - y * 2 * 2);
        x = max(x, 0);
        mm += (x + 15 - 1) / 15;
        cout << mm << endl;
    }
    return 0;
}
