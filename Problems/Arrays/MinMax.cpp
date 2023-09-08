#include <iostream>
#include <limits.h>
using namespace std;
void maxi(int arr[],int n){
    int maxAns=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxAns<arr[i])
        maxAns=arr[i];
    }
    cout<<maxAns<<endl;
}
void mini(int arr[],int n){
    int minAns=INT_MAX;
    for(int i=0;i<n;i++){
        if(minAns>arr[i])
        minAns=arr[i];
    }
    cout<<minAns<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    mini(arr,n);
    maxi(arr,n);
    return 0;
}