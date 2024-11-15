#include<bits/stdc++.h>

using namespace std;

int main(){

    string s; int c1=0, c2=0;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z') c1++;
    }

    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z') c2++;
    }

    if(c1>=c2){
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z')
                s[i] +=32;
        }cout<<s<<endl;
    }

    else{
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z')
                s[i] -=32;
        }cout<<s<<endl;
    }

    return 0;
}