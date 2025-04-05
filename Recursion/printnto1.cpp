#include <iostream>
using namespace std;
void print1ton(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    print1ton(i-1,n);
}
int main(){
    print1ton(5,5);}