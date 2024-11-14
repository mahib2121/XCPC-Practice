#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x, y, z;
    cin >> x >> y >> z;
    double mypoint = z + 0.5 * y;
    double max = x + 0.5*y + 4 - (x+y+z);
    if (max > mypoint ){
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

    return 0;
}
