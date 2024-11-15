#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x=0; cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        if(str[1]=='+') x++;
        else x--;
    }
    cout<<x<<endl;

    return 0;
}