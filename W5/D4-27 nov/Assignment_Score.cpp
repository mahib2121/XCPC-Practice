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
        int n;
        cin >> n;
        int a[n];
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int totalMarks = (n + 1) * 100;
        int toPass = (totalMarks + 1) / 2; 

        if (sum >= toPass)
        {
            cout << 0 << endl;
        }
        else
        {
            int need = toPass - sum;
            if (need > 100)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << need << endl;
            }
        }
    }

    return 0;
}
