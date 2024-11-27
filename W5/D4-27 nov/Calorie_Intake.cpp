#include<bits/stdc++.h>
using namespace std ;

int main (){
    

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a=0,b,c ;
    cin >> a>> b>> c ;
    int eat = (b*c) ;
    if (eat > a){
        cout << -1;
    }
    else{
    cout << a-eat;
    }
    return 0;
}
