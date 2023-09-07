#include <iostream>
#include <cmath>

using namespace std;

bool checkEven(int num){
    if(num%2==0)
    return true;
    else
    false;
}

int main(){
    int num;
    cin>>num;
    cout<<checkEven(num);
    return 0;
}