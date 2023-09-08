#include <iostream>
using namespace std;
int main(){
    int n=5;
    char alphabet='A';
    char ans;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            ans=alphabet+col;
            cout<<ans;
        }
        for(int col=0;col<row;col++){
            ans=ans-1;
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}