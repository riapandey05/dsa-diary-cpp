#include <iostream>
using namespace std;

void print(int n){
   
    for(int i=1;i<=n;i++){
        
        int count=(i%2==0)?0:1;
        
        for(int j=0;j<i;j++){
            
            cout<<count;
            if(count==0){
                count+=1;}
            else{
                count-=1;
            }
            
        }
        cout<<endl;
    }
}
int main(){
    print(5);
}