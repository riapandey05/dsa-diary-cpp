#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printdivisors(int n){
    vector<int> ls;
    for(int i=1;i<=sqrt(n);i++){  //i*i<=n
        if(n%i==0) {
            ls.push_back(i);
            if(n/i !=i){
                ls.push_back(n/i);
            }
            }

           
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls) cout<<it<< " "; 
}
int main(){
    printdivisors(45);
}

//  1 * 36
// 2 * 18
// 3 * 12
// 4 * 9
// 6 * 6
//  so sare factors sqrt(n) ke pehle ki cover hojare like 36 is n/i mtlb 36/1 
// similarly 18 is n/i mtlb 36/2
