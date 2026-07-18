///pivot index (middle index):

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,2,4};
    int size = nums.size();
    int ts = 0;
    for(int i = 0;i< size ;i++){
        ts += nums[i];
    }
    int rs = 0, ls = 0;
    for(int i = 0 ;i< size ;i++){
        rs = ts - ls - nums[i];
        if(ls == rs ){
            cout << i;
        }
        ls += nums[i];
    }
}
