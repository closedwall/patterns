#include <iostream>
using namespace std;

void printPattern(int rows, int cols){
    for(int i=1; i<=rows; i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
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