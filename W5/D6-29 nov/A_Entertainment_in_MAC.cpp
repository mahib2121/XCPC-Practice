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
        string s;
        cin >> s;
        string k(s);
        reverse(k.begin(), k.end());
        string opt1 = s;
        string opt2 = k + s;

        string result;
        if (opt1 < opt2)
        {
            result = opt1; 
        }
        else
        {
            result = opt2; 
        }
        cout << result << '\n';
    }
    return 0;
}
