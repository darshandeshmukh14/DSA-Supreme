#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int left=0,right=size-1;
    while(left<right){
        // swap(arr[left],arr[right]);

        //xor similar to +-
        arr[left]=arr[left]^arr[right];
        arr[right]=arr[left]^arr[right];
        arr[left]=arr[left]^arr[right];

        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){

    int arr[6]={1,2,3,4,5,6};
    reverse(arr,6);
    
    return 0;
}