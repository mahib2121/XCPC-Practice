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
        int S = n / 2;
        int a = S / 2;
        int b = S - a;

        cout << a*b <<endl;
    }
    return 0;
}
