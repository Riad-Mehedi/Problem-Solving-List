#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,c=0,d=0; cin>>a;
    string s; cin>>s;

    for(int i=0; i<a; i++){
        if(s[i]=='A') c++;
        else d++;
    }

    if(c>d) cout<<"Anton"<<endl;
    else if(d>c) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

    return 0;
}