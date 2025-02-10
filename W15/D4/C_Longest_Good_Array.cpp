#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int l, r;
        cin >> l >> r;
        int diff = r - l;

        float t = (-1 + sqrt(1 + 8.0 * diff)) / 2.0;
        int total = (int)t;
        cout << total + 1 << endl;
    }
    return 0;
}
