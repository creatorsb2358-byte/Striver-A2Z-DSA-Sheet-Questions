///sort array by parity:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0,1,2,0,4,5};
        int size = nums.size();
        int st = 0, end = 1;
        while(end < size ){
            if(nums[st] % 2 == 0 && nums[end] % 2 != 0){
                st++;
                end++;
           
            }else if(nums[st] % 2 == 0 && nums[end] % 2== 0){
                end++;
                st++;
            }else if(nums[st] % 2 != 0 && nums[end] % 2 == 0){
                swap(nums[st],nums[end]);
                st++;
                end = st+1;
            }else if(nums[st] % 2 != 0 && nums[end] % 2 != 0){
                end++;
            }

        }
        for(int i : nums){
            cout << i;
        }
}
