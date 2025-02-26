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
        vector<int> v1(n);
        vector<int> v2(n);
        vector<int> v3(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        int Zero_cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (v1[i] == '0' && v2[i] == '0' && v3[i] == '0')
            {
                Zero_cnt++;
            }
        }
        if (Zero_cnt % n != 0)
            cout << -1 << endl;
        if
    }
    return 0;
}
