#include <iostream>
using namespace std;
void func(int i,int n){
    if(i>=n){
        return;
    }
    cout<<"ria";
    func(i+1,n);

}
int main(){
    func(1,5);
}