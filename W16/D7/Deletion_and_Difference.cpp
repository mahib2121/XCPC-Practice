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
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[i + 1])
            {
                ans.push_back(v[i] - v[i + 1]);
                break;
            }
            else
            {
                cout << v.size() << endl;
                break;
            }
        }
        cout << ans.size() << endl;
    }

    return 0;
}
