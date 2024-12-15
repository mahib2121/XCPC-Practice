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
        char a[101];
        char b[101];
        cin >> a;
        int n = strlen(a);
        for (int i = 0; i < n; i++)
        {
            char c = a[n - i - 1];
            if (c == 'p')
            {
                b[i] = 'q';
            }
            else if (c == 'q')
            {
                b[i] = 'p';
            }
            else
            {
                b[i] = 'w';
            }
        }
        b[n] = '\0';  // Ensure the string is null-terminated
        cout << b << endl;
    }
    return 0;
}
