#include<iostream>
using namespace std;

void printPattern(int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row, col;
    row = 4;
    col = 4;
    printPattern(row,col);
    return 0;
}