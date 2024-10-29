#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    if(n<10){
        cout<<"000"<<n;
        return 0;
    }
    if(n<100){
        cout<<"00"<<n;
        return 0;
    }
    if(n<1000){
        cout<<"0"<<n;
        return 0;
    }
    cout<<n;
    return 0;
}