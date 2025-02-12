#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void find(int nda, vector<int>& arr) {
    unordered_set<int> seen;
    
    for (int num : arr) {
        if (seen.count(num)) {  // If num is already in the set
            cout << 1 << endl;
            cout << num << endl;
            return;
        }
        seen.insert(num);
    }
    
    cout << -1 << endl;  // If no duplicate is found
}

int main() {
    int t;
    cin >> t;  // Read number of test cases
    
    while (t--) {
        int nda;
        cin >> nda;  // Read the number of elements (not used)
        
        vector<int> arr(nda);
        for (int i = 0; i < nda; i++) {
            cin >> arr[i];  // Read the array elements
        }
        
        find(nda, arr);
    }
    
    return 0;
}
