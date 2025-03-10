
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, rest = 0, ans = 0;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 2 * n; i++)
    {
        if (a[i % n] == 1)
        {
            rest++;
            ans = max(ans, rest);
        }
        else
        {
            rest = 0;
        }
    }
    cout << ans << endl;

    return 0;
}