#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0)
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(n==1)
    cout<<1<<endl;
    if(n>=2)
    cout<<1<<endl<<2<<endl;
    
    for(int i=3;i<=n/2;i++){
        if(checkPrime(i))
        cout<<i<<endl;
    }
 
    return 0;
}