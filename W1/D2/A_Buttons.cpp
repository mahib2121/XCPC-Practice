#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    
    int maxcoin = a + max(a - 1, b);

    
    cout << maxcoin << endl;

    return 0;
}
