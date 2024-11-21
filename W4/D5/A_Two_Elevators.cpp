#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, t1, t2;
        cin >> a >> b >> c;
        if (c >= b)
        {
            t1 = 2 * c - b - 1;
            t2 = a - 1;
        }
        else
        {
            t2 = a - 1;
            t1 = b - 1;
        }
        if (t2>t1)cout << 2 <<endl;
        else if (t1>t2)cout << 1 <<endl;
        else cout << 3 <<endl;

    }
    return 0;
}
