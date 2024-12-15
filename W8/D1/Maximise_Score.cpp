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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector <int> dif (n-1);
    for (int i = 0;i<n-1 ;i++){
        dif [i]= abs (a[i]-a[i+1]);
    }
    int scroe = INT_MAX;
    if (n >=2){
        scroe = min (scroe ,dif [0]);
    }
    if (n >=2){
        scroe = min (scroe ,dif [n-2]);
    }
    for (int i = 0;i<n-1 ;i++){
       
       int maxdif = max (dif [i-1],dif [i]);
       scroe = min (scroe ,maxdif);
    } 
    cout << scroe <<endl;   

    }
    return 0;
}
