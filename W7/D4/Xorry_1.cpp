#include<bits/stdc++.h>
using namespace std;
 
pair<int, int> Pair(int X) {
    int A = 0, B = 0;
    int bitPosition = 0;
    while ((1 << bitPosition) <= X) {
        bitPosition++;
    }
    int MSB = 1 << (bitPosition - 1);
    A = MSB;
    B = A ^ X;
 
    return {B, A};
}
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        pair<int, int> xorryPair = Pair(x);
        cout << xorryPair.first << " " << xorryPair.second << endl;
    }
 
    return 0;
}