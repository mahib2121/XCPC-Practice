#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<long long int> output;

    for (int i = 0; i < t; i++)
    {
        long long int N;
        cin >> N;
        long long int m = N / 2;

        long long term = N * (m * (m + 1) / 2) - (m * (m + 1) * (2 * m + 1) / 6);
        long long ans = (m + 1) + term;

        output.push_back(ans);
    }

    for (int ans : output)
    {
        cout << ans << endl;
    }
    return 0;
}
