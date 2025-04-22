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
        string v;
        cin >> v;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (v[i] == '@');
            if (v[i] == '*' && v[i + 1] == '*')
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
