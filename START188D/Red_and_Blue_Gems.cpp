#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r, b, p, q;
    cin >> r >> b >> p >> q;
    int total1 = r * p;
    int total2 = b * q;
    if (total2 > total1)
    {
        cout << total2 << endl;
    }
    else
    {
        cout << total1 << endl;
    }

    return 0;
}
