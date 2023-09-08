#include <iostream>
using namespace std;
int main(){
    int n=3;
    for(int row=0;row<n;row++){
        for(int col=0;col<n+3;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}