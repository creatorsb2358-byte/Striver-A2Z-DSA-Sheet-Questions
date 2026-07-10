///to find the index of the smallest number 

#include <iostream>
using namespace std;

int main(){
    int num[5] = {2,1,3,4,5};
    int smallest = INT32_MAX ;
    int variable = 0;
    for(int i = 0; i < 5; i++){
        smallest = min(num[i],smallest);
        if(smallest == num[i]){
            variable = i;
            
        }
    }
    cout << variable ;
}