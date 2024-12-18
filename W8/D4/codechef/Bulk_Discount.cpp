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
        sort (v.begin () ,v.end ());
        long long int bTotal = 0;
        for (int i = 0; i < v.size(); i++)
        {
            bTotal+=max (0,v[i]-i) ;
        }
        cout << bTotal << endl;
    }
    return 0;
}
