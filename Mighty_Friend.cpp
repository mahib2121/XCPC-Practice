#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> v(a), v2(b);

        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                v.push_back(x);
            }
            else
            {
                v2.push_back(x);
            }
        }
        sort(v.rbegin(), v.rend());
        sort(v2.begin(), v2.end());

        int mino = min(v.size(), v2.size());
        int komachy = (mino, b);
        // akhon swap korbo 2 tarray er
        for (int i = 0; i < a; i++)
        {
            if (v.size() > v2.size())
            {
                swap(v[i], v2[i]);
            }
            else
            {

                break;
            }
        }
        int motu{}, tomu{};
        motu = accumulate(v.begin(), v.end(), 0);
        tomu = accumulate(v2.begin(), v2.end(), 0);

        if (tomu > motu)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
