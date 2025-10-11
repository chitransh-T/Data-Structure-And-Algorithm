
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int nums[] = {12,5,22,7,2,56,9};
    int smallest = INT_MAX;
     int size = sizeof(nums) / sizeof(nums[0]); 
     int index = -1;
    for(int i =0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            index = i;
        }
    }
cout<<"the smallest value is " <<smallest <<endl;
cout<<"this index of the smallest value is " << index<<endl;
    return 0;
}