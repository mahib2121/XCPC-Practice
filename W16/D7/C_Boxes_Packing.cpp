#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int cont = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            cont++;
        }
        else
            cont = 1;
    }
    cout << cont << endl;

    return 0;
}
