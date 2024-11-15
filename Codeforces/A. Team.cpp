#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,a,b,c,d=0;  cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if((a==1 && b==1 && c==1) || (a==1 && b==1 && c==0) || (a==1 && b==0 && c==1) || (a==0 && b==1 && c==1))
            d=d+1;
    }
    cout<<d<<endl;

    return 0;
}

