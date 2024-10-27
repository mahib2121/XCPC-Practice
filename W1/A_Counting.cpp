#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << 0 << endl;  
    } else {
        int k = b - a + 1;  
        cout << k << endl;
    }

    return 0;
}
