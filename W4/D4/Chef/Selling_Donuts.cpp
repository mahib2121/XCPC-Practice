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
        int n, m;
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);
        // SHONDHA
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> v2[i];
        }
        int te = 0;
        for (int i = 0; i < m; i++)
        {
            if (v1[v2[i] - 1] > 0)
            {
                v1[v2[i] - 1]--;
            }
            else
            {
                te++;
            }
            
        }
        cout << te <<endl ;
        
    }
    return 0;
}
