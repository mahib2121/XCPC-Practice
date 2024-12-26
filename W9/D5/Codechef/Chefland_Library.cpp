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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int ret = v[i];
            int penalty = i + 1;
            m[ret] = max(m[ret], penalty);
        }
        int total = 0;
        for (auto &it : m)
        {
            total += it.second;
        }
        cout << total << endl;
    }

    return 0;
}
