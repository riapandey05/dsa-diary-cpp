#include <iostream>
using namespace std;
void reverseanarray(int i,int n,int arr[5]){
    if(i>=n){
        return;
    }
    swap(arr[i],arr[n]);
    reverseanarray(i+1,n-1,arr);

}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    reverseanarray(0,size-1,arr);
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}