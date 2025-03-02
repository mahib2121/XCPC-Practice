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
        vector<int> v(n);
        int sum = 0;
        bool hasRemainderOne = false;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] % 3 == 1)
            {
                hasRemainderOne = true;
            }
        }

        if (sum % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (sum % 3 == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (hasRemainderOne ? 1 : 2) << endl;
        }
    }
    return 0;
}
