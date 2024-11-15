#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int counter = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == "hello"[counter]){
            counter++;
        }
        if(counter == 5){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}