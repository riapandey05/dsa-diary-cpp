#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    cin.get();
}

// for(int i=0;i<=5;i++){
        // for(int j=0;j<=i;j++){
        //     cout<<"*";
        // }
        // cout<<endl;