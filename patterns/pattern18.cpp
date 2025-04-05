#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        // space
        for(char ch='E'-i;ch<='E';ch++){
            
            cout<<ch<<" ";

        }
        cout<<endl;
        // character
    }
}
int main(){
    int n;
    cout<<"enter no";
    cin>>n;
    print(n);
}