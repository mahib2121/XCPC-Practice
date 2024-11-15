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

        set<int>a;
        int visit = 0;

        
        for (int i = n - 1; i >= 0; i--)
        {
            if (a.count(v[i]))
            {
                
                break;
            }
            a.insert(v[i]);
            visit++;
        }

       
        cout << n - visit << '\n';
    }

    return 0;
}
