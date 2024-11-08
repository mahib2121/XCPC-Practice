#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int arr[26] = {0};

        for (char i : s)
        {
            arr[i - 'a']++;
        }

        int ans = 0;

        for (char ch : s)
        {
            if (arr[ch - 'a'] % 2 == 1)
            {
                ans++;
                arr[ch - 'a'] = 0;
            }
        }

        if (ans <= (k + 1))
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
