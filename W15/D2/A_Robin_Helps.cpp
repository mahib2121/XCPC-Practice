#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long s = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            long x;
            cin >> x;

            if (x >= k)
            {
                s += x;
            }
            else if (!x && s)
            {
                --s;
                ++cnt;
            }
        }
        cout <<cnt <<endl;
    }
    return 0;
}
