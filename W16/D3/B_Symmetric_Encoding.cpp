
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
        string b;
        cin >> b;
        vector<int> cnt(26, 0);
        for (char c : b)
        {
            cnt[c - 'a'] = 1;
        }
        string temp = "";
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > 0)
            {
                temp += (char)('a' + i);
            }
        }

        string a = "";
        for (char c : b)
        {
            a += temp[temp.size() - 1 - temp.find(c)];
        }
        cout << a << endl;
    }
    return 0;
}