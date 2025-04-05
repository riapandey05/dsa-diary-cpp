#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter values of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    
    int q;
    cout<<"enter no";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"frequency is "<<hash[number]<<endl;
    }


}

