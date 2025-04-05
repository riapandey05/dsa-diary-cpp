#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter no";
    cin>>n;
    print(n);
}

//  for(int i=1;i<=n;i++){
        // for(int j=0;j<n-i+1>;j++){
        //     cout<<"*";
        // }