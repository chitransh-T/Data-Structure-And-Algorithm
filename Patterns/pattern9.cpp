/*
1
01
101
0101
10101
*/
#include<iostream>
using namespace std;
int main(){
int n = 5;
int start = 0;   // any value we can put initially i will going to change accordimg tp condition
for(int i = 1; i<=n;i++){
    if(i%2==0){
            start =0;
        }
        else{
            start =1;
        }
    for(int j = 1; j<=i; j++){
        
        cout<<start;
        start=1 - start;
        
    }
    cout<<endl;
}
 
}