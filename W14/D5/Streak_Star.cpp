#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        int maxStreak = 1;
        for (int i = 0; i < n; i++)
        {
            vector<int> modified = v;
            modified[i] *= x;
            
            int l = 1, r = 1;
            for (int j = 1; j < n; j++)
            {
                if (modified[j] >= modified[j - 1])
                {
                    r++;
                }
                else
                {
                    maxStreak = max(maxStreak, r);
                    r = 1;
                }
            }
            maxStreak = max(maxStreak, r);
        }
        
        cout << maxStreak << "\n";
    }
    return 0;
}
