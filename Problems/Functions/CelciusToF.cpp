#include <iostream>
#include <cmath>

using namespace std;

float convertCelToF(float cel){
    float faren = (cel*(9/5))+32;
    return faren;
}

int main(){
    float cel;
    cin>>cel;
    cout<<convertCelToF(cel)<<endl;
    return 0;
}