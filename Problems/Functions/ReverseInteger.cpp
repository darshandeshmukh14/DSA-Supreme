#include <iostream>
#include <cmath>

using namespace std;
long Reverse(long num){
    long RevNum=0;
    while(num>0){
        RevNum=(RevNum*10)+(num%10);
        num=num/10;
    }
    return RevNum;
}
int main(){
    long num;
    cin>>num;
    cout<<Reverse(num)<<endl;
    return 0;
}