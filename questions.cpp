///count total mountain and valleys:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,2,5};
    int count = 0;
    int left = 0;

    for (int i = 1; i < nums.size() - 1; ++i) {
        if (nums[i] != nums[i + 1]) {
            if ((nums[i] > nums[left] && nums[i] > nums[i + 1]) ||
                (nums[i] < nums[left] && nums[i] < nums[i + 1])) {
                ++count;
            }
            left = i;
                
        }
    }

    cout << count;

}

