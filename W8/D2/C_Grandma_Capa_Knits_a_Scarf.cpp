#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;

        long res(-1);
        for (char c = 'a'; c <= 'z'; c++)
        {
            long left(0), right(n - 1);
            long cnt(0);
            while (cnt >= 0 && left < right)
            {
                if (s[left] == s[right])
                {
                    left++;
                    right--;
                }
                else if (s[left] == c)
                {
                    left++;
                    cnt++;
                }
                else if (s[right] == c)
                {
                    right--;
                    cnt++;
                }
                else
                {
                    cnt = -1;
                }
            }

            if (cnt >= 0)
            {
                res = ((res < 0) || (cnt < res) ? cnt : res);
            }
        }

        cout << res << endl;
    }
}