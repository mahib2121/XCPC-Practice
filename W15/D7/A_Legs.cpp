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

        int n;
        cin >> n;
        int cowLeg = n / 4;
        int chikenleg = (n - 4 * cowLeg) / 2;
        long long total = cowLeg + chikenleg;
        cout << total << endl;
    }
    return 0;
}
