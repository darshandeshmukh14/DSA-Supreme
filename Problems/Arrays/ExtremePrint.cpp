#include <iostream>
using namespace std;
void ExtremePrint(int arr[],int size){
    int i=0,j=size-1;
    while(i<=j){
        if(i==j) cout<<arr[i];
        else
        cout<<arr[i]<<" "<<arr[j]<<endl;
        i++;
        j--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    ExtremePrint(arr,size);
    return 0;
}