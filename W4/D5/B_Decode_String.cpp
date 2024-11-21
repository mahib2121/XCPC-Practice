#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string d;
        for (int i = n - 1; i >= 0; ) {
            if (s[i] == '0') {
                
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                d.push_back('a' + num - 1);
                i -= 3;
            } else {
              
                d.push_back('a' + (s[i] - '1'));
                i--;
            }
        }

        reverse(d.begin(), d.end());
        cout << d << "\n";
    }

    return 0;
}
