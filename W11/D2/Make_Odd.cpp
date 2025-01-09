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
        long long int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;

        long long int l = 0;
        long long int m = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '1')
            {
                l++;
            }
            else if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
            {
                m++;
            }
        }
        long long int total = l + m;
        if (total % 2 == 1 || m >0 )
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