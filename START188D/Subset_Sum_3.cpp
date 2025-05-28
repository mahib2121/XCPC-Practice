#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        vector<bool> dp(3, false);

        for (int i = 0; i < N; ++i)
        {
            vector<bool> new_dp = dp;
            new_dp[A[i] % 3] = true;

            for (int j = 0; j < 3; ++j)
            {
                if (dp[j])
                {
                    new_dp[(j + A[i]) % 3] = true;
                }
            }

            dp = new_dp;
        }

        if (dp[0])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}