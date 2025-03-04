#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            return false;
    }
    return true;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
                zero++;
        }
        int dif = abs(one - zero);
        if (dif <= 1)
        {
            if (check(s))
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if (dif <= 3)
        {
            cout << 2 << endl;
        }
        else
            cout << 3 << endl;
    }
    return 0;
}
