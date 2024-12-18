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
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int b[n];
        int c[n];
        b[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            b[i] = max(v[i], b[i + 1]);
        }
        c[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] == b[i])
            {
                c[i] = 0;
            }
            else
            {
                c[i] = c[i + 1] + 1;
            }
        }
        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            answer = max(answer, c[i]);
        }
        cout << answer << endl;
    }
    return 0;
}
