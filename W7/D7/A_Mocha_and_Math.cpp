#include<bits/stdc++.h>
using namespace std ;

int main (){
    

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--)
    {
    int n ;
    cin >> n ;
    int a[n+1];
    for (int i = 0 ;i< n ;i++){
        cin >> a[i];
    }
    int val = a[0];
    for (int i = 1;i<n ;i++){
        val = val&a[i];
    }
    cout <<val <<endl;

    }
    return 0;
}
