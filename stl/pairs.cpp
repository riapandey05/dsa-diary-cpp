#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void explainpair(){
    pair<int,int>p={1,3};
    cout<<p.first<<"and"<<p.second<<endl;

    pair<int,pair<int ,int>>p2={1, {3,4}};
    cout<<p2.first<<" ria"<< p2.second.first<<"raj "<<p2.second.second<<endl;
    
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
}
int main(){
    explainpair();
}