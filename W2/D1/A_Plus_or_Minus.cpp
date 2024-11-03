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
        int p, q, r;
        cin >> p >> q >> r;
        if (p + q == r)
        {
            cout << "+"<<endl;
        }
        else if (p - q == r)
        {
            cout << "-"<<endl;
        }
    }

    return 0;
}
