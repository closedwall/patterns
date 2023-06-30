#include <iostream>
using namespace std;

void printPattern(int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
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