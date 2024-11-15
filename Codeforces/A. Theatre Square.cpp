#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,m,a,r=0,s=0; cin>>n>>m>>a;
    r = n/a;
    if(n%a != 0) r++;
    s = m/a;
    if(m%a != 0) s++;
    cout<<r*s<<endl;

    return 0;
}
