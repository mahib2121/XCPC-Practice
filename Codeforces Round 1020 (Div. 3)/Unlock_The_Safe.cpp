#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n), d(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        long long bM = 0;
        int minFlipCost = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int diff = (d[i] - a[i] + 9) % 9;

            int directMoves, flipCost;
            if (diff == 0)
            {
                directMoves = 0;
                flipCost = 9;
            }
            else
            {
                int clockwise = diff;
                int counterClockwise = 9 - diff;

                directMoves = min(clockwise, counterClockwise);
                flipCost = 9 - 2 * directMoves;
            }

            bM += directMoves;
            minFlipCost = min(minFlipCost, flipCost);
        }

        long long remainingMoves = k - bM;

        if (remainingMoves < 0)
        {
            cout << "No\n";
        }
        else if (remainingMoves % 2 == 0 || minFlipCost <= remainingMoves)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
