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
        int c = 0;
        int sqt = sqrt(n);

        if (sqt * sqt != n)
        {
            cout << "No" << endl;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] =='0')
                {
                    c++;
                }
            }

            if (sqrt(n) - 2 == sqrt(c))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
