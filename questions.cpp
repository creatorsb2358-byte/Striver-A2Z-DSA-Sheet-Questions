///monotonic array:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};
    int size = nums.size();
    bool isincreasing = false , isdecreasing = false;
    for(int i = 1 ;i < size ;i++){
        if(nums[i] > nums[i-1]){
            isincreasing = true ;
        }else if(nums[i] < nums[i-1]){
            isdecreasing = true;
        }
    }
    if(isincreasing == true && isdecreasing == true){
        return false;
    }else{
        return true;
    }
}

