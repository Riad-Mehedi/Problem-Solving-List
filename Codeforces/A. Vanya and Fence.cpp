#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,sum=0; cin>>a>>b;
    int arr[a];
    for(int i=0; i<a; i++){
        cin>>arr[i];
        if(arr[i]<=b) sum = sum+1;
        if(arr[i]>b) sum = sum+2;
    } 
    cout<<sum<<endl;

    return 0;
}