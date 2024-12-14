#include<bits/stdc++.h>
using namespace std;

vector<bool> convertToBinary(int x) {
    vector<bool> output;
    while (x > 0) {
        output.push_back(x % 2);
        x /= 2;
    }
    return output;
}

int compareBinaryVectors(const vector<bool>& first, const vector<bool>& second) {
    int output = 0;
    size_t p = 0;
    while (p < first.size() || p < second.size()) {
        bool bit1 = (p < first.size()) ? first[p] : 0;
        bool bit2 = (p < second.size()) ? second[p] : 0;
        output += (bit1 != bit2);
        ++p;
    }
    return output;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> xvec(m + 1);
    for (int p = 0; p <= m; ++p) {
        cin >> xvec[p];
    }

    vector<bool> anchor = convertToBinary(xvec[m]);

    int friends = 0;
    for (int p = 0; p < m; ++p) {
        if (compareBinaryVectors(anchor, convertToBinary(xvec[p])) <= k) {
            friends++;
        }
    }

    cout << friends << endl;

    return 0;
}
