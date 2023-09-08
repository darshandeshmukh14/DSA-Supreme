#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
       if(row==0) cout<<1;
       else if(row==n-1){
        for(int col=0;col<n;col++)
        cout<<col+1;
       }
       else{
        for(int col=0;col<row+2;col++){
            if(col==0) cout<<col+1;
            else if(col==row+1) cout<<col;
            else cout<<" ";
        }
       }
        cout<<endl;
    }
    return 0;
}