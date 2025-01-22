#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string s2 = ("WECNITK");
    if ((s.compare(s2)) == 0)
        cout << "Welcome to Web Club!" << endl;
    else
        cout << "Access denied" << endl;

    return 0;
}
