#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void countdigits(int n){
    int counter=0;
    while(n>0){
        int lastdigit=n%10;
        counter++;
        n=n/10;
    }
    cout<<counter;

}
int main(){
    countdigits(99999);
}