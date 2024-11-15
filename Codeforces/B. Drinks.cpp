#include<bits/stdc++.h>
using namespace std;

int main(){
    double t,sum=0,avg;
    cin>>t;
    for(int i=0; i<t; i++){
        int a; cin>>a;
        sum +=a;
    }
    avg = sum/t ;
    cout<<fixed<<setprecision(12)<<avg<<endl;

    return 0;
}