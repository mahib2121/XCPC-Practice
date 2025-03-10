#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    unordered_set<long long int> s;
    int left = 0, maxLe = 0;

    for (int right = 0; right < n; right++)
    {
        while (s.find(v[right]) != s.end())
        {
            s.erase(v[left]);
            left++;
        }
        s.insert(v[right]);
        maxLe = max(maxLe, right - left + 1);
    }

    cout << maxLe << endl;

    return 0;
}
