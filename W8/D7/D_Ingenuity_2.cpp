#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, y = 0;
    for (char c : s) {
        if (c == 'N') y++;
        else if (c == 'S') y--;
        else if (c == 'E') x++;
        else if (c == 'W') x--;
    }

    if (x % 2 != 0 || y % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    vector<char> ans(n, 'R');
    unordered_map<char, char> inv = {{'N', 'S'}, {'S', 'N'}, {'E', 'W'}, {'W', 'E'}};

    if (x == 0 && y == 0) {
        if (n == 2) {
            cout << "NO" << endl;
            return;
        }
        ans[0] = 'H';
        ans[s.find(inv[s[0]])] = 'H';
    } else {
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'N' && y > 0) {
                y -= 2;
                ans[i] = 'H';
            } else if (s[i] == 'S' && y < 0) {
                y += 2;
                ans[i] = 'H';
            } else if (s[i] == 'E' && x > 0) {
                x -= 2;
                ans[i] = 'H';
            } else if (s[i] == 'W' && x < 0) {
                x += 2;
                ans[i] = 'H';
            }
        }
    }

    for (char c : ans) {
        cout << c;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
