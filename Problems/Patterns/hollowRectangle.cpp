#include <iostream>
using namespace std;
int main(){
    int n=3;
    for(int row=0;row<n;row++){
        for(int col=0;col<n+3;col++){
            if(row==0 || row==n-1 || col==0 || col==n+2){
            cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}