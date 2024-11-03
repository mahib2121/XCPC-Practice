#include<bits/stdc++.h>
using namespace std ;

int main (){
    

    int  n ;
    cin >> n ;
    vector <int> v (n);
    int x;
    cin >> x;
    for (int i = 0 ; i<n ;i++){
        cin >> v[i];
        
    }
    for (int val: v) {
        if (val != x) cout << val << ' ';
    }
    return 0;
}
