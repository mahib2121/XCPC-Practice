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
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int odd = 0;
        int even = 0;

        for (int i = 0; i < N; ++i)
        {
            if (i % 2 == 0)
            {
                odd += A[i];
            }
            else
            {
                even += A[i];
            }
        }

        cout << max(odd, even) << endl;
    }

    return 0;
}
