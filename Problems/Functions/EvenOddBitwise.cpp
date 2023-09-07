#include <iostream>
#include <cmath>

using namespace std;

bool checkEven(int num){
    if(num&1)
    return false;
    else 
    return true;
}

int main(){
    int num;
    cin>>num;
    cout<<checkEven(num);
    return 0;
}