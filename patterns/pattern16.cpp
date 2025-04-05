#include <iostream>
using namespace std;
void print(int n){
    char j='A';
    for(int i=1;i<=n;i++){
        
        
        for(int k=0;k<i;k++){
            cout<<j<<" ";
            
        }
        cout<<endl;
        j++;
    }
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print(n);
}