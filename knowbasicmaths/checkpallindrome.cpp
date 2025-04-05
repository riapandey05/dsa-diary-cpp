#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse(int n){
    int duplicate_n=n;
    int reverseno=0;
    while(duplicate_n>0){
        int lastdigit=duplicate_n%10;
        duplicate_n=duplicate_n/10;
        reverseno=(reverseno*10)+lastdigit;
    }
    if(reverseno==n) cout<<"yess a palindrome";
    else cout<<"not a palindrome";
    
    
}
int main(){
    reverse(8827);
    return 0;
}