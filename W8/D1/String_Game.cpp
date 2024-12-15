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
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                sum++;
            }
        }
        int m = min(sum, n-sum);
        if (m % 2 != 0)
        {
            cout << "Zlatan" << endl;
        }
        else
        {
            cout << "Ramos" << endl;
        }
    }
    return 0;
}
