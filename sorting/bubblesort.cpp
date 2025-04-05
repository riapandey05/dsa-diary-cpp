#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1; i>=1;i--){
        int didswap = 0;
        for(int j=0; j<i;j++){
           if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            didswap=1;
        }

        if(didswap==0){
            break;
        }
        
    }

    
    
}
int main(){
    cout<<"enter the size of array ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}