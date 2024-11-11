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
        string g;
        cin >> g;
        int l = 0, r = n - 1, ans = n;
        while (l<=r)
        {
            if (g[l] == g[r]){
                break;
            }
            else {
                ans -= 2;
                l++,r--;
            }
        }
        cout << ans <<endl;

    }
    return 0;
}
