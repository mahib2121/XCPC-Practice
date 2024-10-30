#include<bits/stdc++.h>
using namespace std ;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    long long total = 0;
    int smallOdd =1e9 + 1 ; 

   
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        total += nums[i];
        if (nums[i] % 2 != 0) {
            smallOdd = min(smallOdd, nums[i]);
        }
    }

    if (total % 2 == 0) {
        cout << total << endl;
    } else {

        cout << total - smallOdd << endl;
    }

    return 0;
}
