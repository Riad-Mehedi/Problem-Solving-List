#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    int row, col, moves=0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                row = i;
                col = j;
            }
        }
    }
    moves = abs(row-2) + abs(col-2);
    cout<<moves<<endl;

    return 0;
}