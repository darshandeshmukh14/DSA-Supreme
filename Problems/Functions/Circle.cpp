#include <iostream>
#include <cmath>

using namespace std;

float AreaOfCircle(float radius){
    float Area = M_PI*radius*radius;
    return Area;
}

int main(){
    float radius;
    cin>>radius;
    cout<<"Area of Circle is "<<AreaOfCircle(radius)<<endl;
    
    return 0;
}