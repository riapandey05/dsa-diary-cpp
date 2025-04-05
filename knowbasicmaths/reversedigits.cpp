#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(int n){
    int reverseno=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        reverseno=(reverseno*10)+lastdigit;
    }
    cout<<reverseno;
    
    
}
int main(){
    reverse(8827);
}