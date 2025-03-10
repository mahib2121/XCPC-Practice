#include <bits/stdc++.h>
using namespace std;

bool che(int n, vector<int> &v(n))
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j] == x)
            {
                return true;
            }
        }
    }

    return false;
}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    return 0;
}
