#include <iostream>
using namespace std;
void print(int n){
    int j=1;
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<=i;k++){
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