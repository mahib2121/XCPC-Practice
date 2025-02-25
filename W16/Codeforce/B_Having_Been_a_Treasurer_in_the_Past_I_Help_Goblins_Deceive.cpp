#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0;
        int y = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '-')
            {
                x++;
            }
            else
                y++;
        }

        if (x < 2 || y == 0)
        {
            cout << "0" << endl;
        }
        else
            cout << (1LL * x * x / 4) * y << endl;
    }
    return 0;
}
