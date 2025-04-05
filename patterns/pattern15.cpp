#include <iostream>
using namespace std;
void print(int n){
    
    for(int i=1;i<=n;i++){
        char j='A';
        
        for(int k=0;k<n-i+1;k++){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print(n);
}