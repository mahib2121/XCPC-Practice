#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        sort(v.begin(), v.end());
        int answer1 = v[n - 1] - v[2];
        int answer2 = v[n - 3] - v[0];
        int answer3 = v[n - 2] - v[1];
        int minimum = min(answer1, answer2);
        int final = min(minimum, answer3);
        cout << final << endl;
    }
    return 0;
}
