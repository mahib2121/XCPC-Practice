#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long bad(0);
        for (long i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            --x;
            bad += (x % k != i % k);
        }

        if (bad == 0)
        {
            cout <<"0"<<endl;
        }
        else if (bad == 2)
        {
            cout <<"1"<<endl;
        }
        else
        {
            cout <<"-1"<<endl;
        }
    }
    return 0;
}
