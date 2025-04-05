#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);  
    // in emplace back w/o curly braces it considers it a pair
    
    vector<int>v1(5,100);
    // {100,100,100,100,100}
    
    vector<int>v2(5);
    // size 5 with all values zero or garbage depending upon compiler

    vector<int>v3(5,20);
    vector<int>v4(v1);

    cout<<v[0]<<endl;
    cout<<v.at(0)<<endl;

    vector<int>::iterator it=v.begin();
    
    cout<<*(it)<<" ";
    cout<<endl;
    it++;

    // it=it+2;
    // cout<<*(it);
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it);
    }

}
int main(){
    explainVector();}
