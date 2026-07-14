///to print the max subarray(using bruteforce):

#include <iostream>
using namespace std;

int main(){
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int maxx = INT16_MIN;
    for(int st = 0; st < 7; st++){
        int sum = 0;
        for(int end = st; end < 7; end++){
            sum += arr[end];
            maxx = max(sum,maxx);
        }
    }
    cout << "so the max subarray is :" << maxx ;

}

