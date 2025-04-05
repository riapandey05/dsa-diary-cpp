#include <iostream>
using namespace std;
void print1ton(int i,int n){
    if(i<1){
        return;
    }
    print1ton(i-1,n);
    cout<<i<<endl;
}
void printnto1(int i , int n){
    if(i==n){
        return;
    }
    printnto1(i+1,n);
    cout<<i<<endl;

}
int main(){
    printnto1(1,7);
    print1ton(6,1);
}