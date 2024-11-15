#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    long long int a,b,c,d;

    while(t--){
        cin>>a>>b;
        if(a%b!=0){
            c = a%b;
            d = b-c;
            cout<<d<<endl;
        }
        else cout<<"0"<<endl;
    }

    return 0;
}