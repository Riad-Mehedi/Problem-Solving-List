#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,p,r=0; cin>>a>>b>>c;
    for(int i=1; i<=c; i++){
        p=i*a;
        r=r+p;
    }
    if(r>b) cout<<r-b<<endl;
    else cout<<"0"<<endl;

    return 0;
}