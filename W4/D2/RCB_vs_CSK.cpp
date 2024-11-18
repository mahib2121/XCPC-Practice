#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int diff = n - m ;
    if (diff >= 18 ){
        cout <<"RCB\n";
    }
    else {
        cout << "CSK";
    }

    return 0;
}
