#include <bits/stdc++.h>
using namespace std;

void stingTraversal(vector<string> &s)
{
    for (int i = 0; i <= 3; i++)
    {
        if (s[i] == "W" && s[i + 1] == "W" && s[i + 2] == "W")
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        vector<string> s(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> s[i];
        }

        stingTraversal(s);
    }
    return 0;
}
