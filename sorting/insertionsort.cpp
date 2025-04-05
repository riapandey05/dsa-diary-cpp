#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0; i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
            cout<<"runs";
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
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}