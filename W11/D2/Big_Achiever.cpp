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

        int max = INT_MIN; 
        for (int i = 0; i < n; i++)
        {
            if (v[i] > max)
            {
                cout << 1 << " "; 
                max = v[i];  
            }
            else
            {
                cout << 0 << " " ; 
            }
           
        }
        cout <<endl;
    }
    return 0;
}
