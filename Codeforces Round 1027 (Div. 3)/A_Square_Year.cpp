#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;           // Input year as a string
        int year = stoi(s); // Convert the string to an integer
        bool found = false;

        for (int a = 0; a * a <= year; ++a)
        {
            for (int b = 0; (a + b) * (a + b) <= year; ++b)
            {
                if ((a + b) * (a + b) == year)
                {
                    cout << a << " " << b << endl;
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}