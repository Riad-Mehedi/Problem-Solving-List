#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,c;
    cin>>a;

    if(a%2==0) c=a/2;
    else c=((a+1)/2)*(-1);

    cout<<c<<endl;

    return 0;
}