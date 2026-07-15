///remove duplicates in a sorted array:

#include <iostream>
using namespace std;

int main(){
    int nums[5] = {1,2,3,3,4};
    int size = 5;
    int st = 0 , end = 1;
    while(end < size){
        if(nums[st] == nums[end]){
            end++;
        }else{
            st++;

            nums[st] = nums[end];
            end++;
              
        }
    }
    cout << st + 1;
    }

