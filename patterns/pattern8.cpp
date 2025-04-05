#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=i;j>0;j--){
            cout<<" ";

        }
        // star
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        // space
        for(int j=i;j>0;j--){
            cout<<" ";
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