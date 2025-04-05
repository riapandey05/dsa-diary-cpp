#include <iostream>
using namespace std;
void sum(int i, int Sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sum(i-1,Sum+i);
    cout<<Sum;
}
int sum1(int n){
    if(n==0){
        return 0;
        
    }
    return n + sum1(n-1);
}
int main(){
   int result = sum1(5);
   cout<<result;
}