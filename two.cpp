#include <iostream>
using namespace std;

void printPattern(int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main() {
 // code here
    int rows, cols;
    rows =4;
    cols = 4;
    printPattern(rows,cols);
    return 0;
}