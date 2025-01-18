#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, A;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long> group_sizes;
    long long count = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
        }
        else
        {
            group_sizes.push_back(count);
            count = 1;
        }
    }
    group_sizes.push_back(count); 

    long long max_length = 0;

    
    for (int i = 1; i < group_sizes.size(); i++)
    {
        max_length = max(max_length, 2 * min(group_sizes[i], group_sizes[i - 1]));
    }

    cout << max_length << endl;

    return 0;
}
