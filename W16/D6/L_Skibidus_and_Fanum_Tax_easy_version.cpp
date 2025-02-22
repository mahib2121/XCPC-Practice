#include <bits/stdc++.h>
using namespace std;

bool can_sort(int n, vector<int> &a, int b_val)
{
    if (n == 0)
        return true;

    int prev = min(a[0], b_val - a[0]);

    for (int i = 1; i < n; i++)
    {
        int curr = a[i];
        int op1 = curr;
        int op2 = b_val - curr;

        vector<int> vo;
        if (op1 >= prev)
            vo.push_back(op1);
        if (op2 >= prev)
            vo.push_back(op2);

        if (vo.empty())
            return false;

        prev = *min_element(vo.begin(), vo.end());
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int b_val = b[0];

        if (can_sort(n, a, b_val))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}