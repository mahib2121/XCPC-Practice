#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string name, adds;
        cin >> name >> adds;
        mp[adds] = name;
    }

    for (int i = 0; i < m; ++i)
    {
        string command, ipAddressWithSemicolon;
        cin >> command >> ipAddressWithSemicolon;

        string ipAddress = ipAddressWithSemicolon.substr(0, ipAddressWithSemicolon.size() - 1);

        cout << command << " " << ipAddressWithSemicolon << " #" << mp[ipAddress] << endl;
    }

    return 0;
}
