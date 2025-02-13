#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, ans;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (i % m == 0)
            {
                for (int j = 0; j < s.size(); j+=m)
                {
                    ans.push_back(s[j]);
                }
                v.push_back(ans);
                ans.clear();
            }
        }
        for (auto it : v)
        {
            cout << it << endl;
        }
    }
    return 0;
}
