// Reversing the Array using two Pointer

#include <iostream>
using namespace std;

//function for reversing the array
void reverseArray(int arr[] ,int size){
      int start = 0;
      int end = size - 1;
      while(start<end){
      swap(arr[start], arr[end]);
      start++;
      end--;
  }
}


int main(){
  int arr[] = {2,6,3,9,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  reverseArray(arr,size);                   
  
  for(int i =0 ; i<size; i++){                // printing the array after reverseing
      cout<<arr[i]<<" ";
  }
    return 0;
}