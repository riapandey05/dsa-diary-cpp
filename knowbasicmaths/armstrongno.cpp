#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void checkarmstrong(int n){
    int duplicate_n=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum + pow(lastdigit,3);
        n=n/10;
    }
    if(duplicate_n==sum) cout<<"yes an armstrong no";
    else cout<<"not an armstrong no";
}
int main(){
    checkarmstrong(371);
}