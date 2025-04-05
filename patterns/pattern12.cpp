#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        int j=1;
        for(int k=0;k<i+1;k++){
            cout<<j;
            j++;
        }
        for(int l=0;l<n-(2*i)+2;l++){
            cout<<" ";
        }
        for(int m=i+1;m>0;m--){
            cout<<m;
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