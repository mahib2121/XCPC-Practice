#include <bits/stdc++.h>


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        if (b == "abc" || b == "bac" || b == "acb" || b == "cba")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
