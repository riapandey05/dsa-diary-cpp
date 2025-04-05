// a no which has two factors 1 and the no itself
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void checkprime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0)
         count++;
         if((n/i)!=i)
           count++;
         
    }
    if(count==2) cout<<"is a prime";
    else cout<< "false";
}
int main(){
    checkprime(5);
}