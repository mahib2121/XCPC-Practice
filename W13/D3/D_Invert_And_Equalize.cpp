#include <bits/stdc++.h>
using namespace std;

int invertBinaryString(const string &b) {
    int count_0_groups = 0; // Count of groups of consecutive '0's
    int count_1_groups = 0; // Count of groups of consecutive '1's

    char prev_char = b[0]; // Initialize with the first character
    if (prev_char == '0') {
        count_0_groups++;
    } else {
        count_1_groups++;
    }

    // Traverse the string to count groups
    for (size_t i = 1; i < b.size(); ++i) {
        if (b[i] != prev_char) {
            if (b[i] == '0') {
                count_0_groups++;
            } else {
                count_1_groups++;
            }
            prev_char = b[i];
        }
    }

    // Return the minimum of the two group counts
    return min(count_0_groups, count_1_groups);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;
        cout << invertBinaryString(b) << endl;
    }
    return 0;
}
