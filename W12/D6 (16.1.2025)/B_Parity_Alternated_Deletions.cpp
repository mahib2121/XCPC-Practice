#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> even, odd;

    for (int  i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x % 2 == 0) {
            even.push_back(x);
        } else {
            odd.push_back(x);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    long long sum = 0;

    if (even.size() > odd.size()) {
        for (int  i = 0; i + odd.size() + 1 < even.size(); i++) {
            sum += even[i];
        }
    } else {
        for (int  i = 0; i + even.size() + 1 < odd.size(); i++) {
            sum += odd[i];
        }
    }

    cout << sum << endl;

    return 0;
}
