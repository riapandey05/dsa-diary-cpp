#include <iostream>
using namespace std;
void print(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}   
int main(){
    print(5);
    
}