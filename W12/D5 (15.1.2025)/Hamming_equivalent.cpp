#include<bits/stdc++.h>
using namespace std;

int SetBits(int num) {
    return __builtin_popcount(num);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N; 
        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        map<int, vector<int>> groups;
        for (int num : P) {
            groups[SetBits(num)].push_back(num);
        }

      
        for (auto &group : groups) {
            sort(group.second.begin(), group.second.end());
        }

        vector<int> updatedP;
        for (int num : P) {
            int setBits = SetBits(num);
           updatedP.push_back(groups[setBits].front());
            groups[setBits].erase(groups[setBits].begin());
        }

        
        vector<int> sortedP = P;
        sort(sortedP.begin(), sortedP.end());
        if (updatedP == sortedP) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
