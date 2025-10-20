#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int target ){
      for(int i =0; i<size ; i++){
        if(arr[i]==target){       
            return i;
        }
    }
  return -1;
}
int main() {
   int arr[] = {6,4,9,3,5,7};
   int target = 5;
   int size = sizeof(arr)/sizeof(arr[0]);
   
   cout<<linearSearch(arr , size , target) << endl;    
  
    return 0;
}