#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, year=0;
    cin>>a>>b;

    if(a>b) year=0;
    else{
        while(a<=b){
            year++;
            a = a*3;
            b = b*2;
        }
        cout<<year<<endl;
    }

    return 0;
}