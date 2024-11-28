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
        long n;
        cin >> n;
        map<long, vector<long>> mv;
        vector<char> res(n, ' ');
        char nxt('a');
        for (long p = 0; p < n; p++)
        {
            int x;
            cin >> x;
            char cur;
            if (x == 0)
            {
                cur = nxt;
                nxt++;
            }
            else
            {
                cur = mv[x - 1].back();
                mv[x - 1].pop_back();
            }
            cout << cur;
            mv[x].push_back(cur);
        }

        cout << endl;
    }
}