#include <bits/stdc++.h>
using namespace std;

void findSubsegment(const vector<int>& arr) {
    int n = arr.size();

    
    for (int i = 0; i < n - 2; ++i) {
        int a = arr[i], b = arr[i+1], c = arr[i+2];
        int min_val = min({a, b, c});
        int max_val = max({a, b, c});

        
        if (a != min_val && a != max_val && c != min_val && c != max_val) {
            cout << i+1 << " " << i+3 << endl; 
            return;
        }
    }

    
    cout << "-1" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        findSubsegment(arr);
    }
    return 0;
}
