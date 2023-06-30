#include <iostream>
using namespace std;

void printPattern(int rows, int cols){
    for(int i=0; i<rows; i++){
        int j;
        for(j=0;j<rows-i-1;j++){
            cout<<" ";
        }
        for( ;j<=rows+i-1;j++){
            cout<<"*";
        }
        for( ; j<2*rows-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=rows-1; i>=0; i--){
        int j;
        for(j=0;j<rows-i-1;j++){
            cout<<" ";
        }
        for( ;j<=rows+i-1;j++){
            cout<<"*";
        }
        for( ; j<2*rows-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
 // code here
    int rows, cols;
    rows =5;
    cols = 5;
    printPattern(rows,cols);
    return 0;
}