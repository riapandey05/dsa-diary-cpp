#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";

        }
    for(int k=0;k<=(2*n)-2*i-2;k++){
        cout<<" ";
    }
    for(int l=0;l<i;l++){
        cout<<"*";

    }
    cout<<endl;
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(i)+1;k++){
            cout<<" ";
        }
        for(int l=0;l<n-i-1;l++){
            cout<<"*";
        }
        cout<<endl;
    }


}

int main(){
    print(5);
}