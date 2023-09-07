#include <iostream>
#include <cmath>

using namespace std;

int factorial(int num){
    int facto=1;
    for(int i=1;i<=num;i++){
        facto=facto*i;
    }
    return facto;
}

int main(){
    int num;
    cin>>num;
    cout<<"Factorial of a Number "<<factorial(num);    
    return 0;
}