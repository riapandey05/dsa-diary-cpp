#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// eucledian algorithm
// gcd(n1,n2) = gcd(n1-n2 , n2) = gcd(n1%n2, n2)

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}
int main(){
   int result= gcd(20,15);
   cout<<result;
}