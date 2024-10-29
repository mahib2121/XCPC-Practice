#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    int f=0;
    map<char,int>m;
    for(int i=0; i<s.size(); i++)
    {
        m[s[i]]=1;
    }
    for(char i='a'; i<='z'; i++)
    {
        if(m[i]==0)
        {
            cout<<i<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"None"<<endl;
    return 0;
}




