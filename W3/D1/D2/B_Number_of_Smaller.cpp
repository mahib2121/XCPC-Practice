#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int l = 0, r = 0, c = 0;
    while (r < m)
    {
        if (l < n && arr1[l] < arr2[r])
        {
            c++,l++;
        }
        else
        {
            cout << c << " ";
            r++;
        }
    }

    return 0;
}
