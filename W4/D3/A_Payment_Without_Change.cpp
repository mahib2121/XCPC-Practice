#include <iostream>
using namespace std;

int main() {
    int q; // Number of test cases
    cin >> q;
    
    while (q--) {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        // Calculate maximum contribution from coins of value n
        long long max_n_value = min(a, S / n) * n;

        // Calculate remaining value to be covered by coins of value 1
        long long remaining_value = S - max_n_value;

        // Check if we can cover the remaining value with coins of value 1
        if (remaining_value <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}