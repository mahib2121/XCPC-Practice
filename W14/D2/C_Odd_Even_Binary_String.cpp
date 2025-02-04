#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int m;
        cin >> m;
        int count = 0;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                count++;
            }
        }
        if (count % 2 == 0)
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
