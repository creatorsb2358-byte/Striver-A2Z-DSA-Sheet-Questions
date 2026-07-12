///make a function to sum and product all the numbers in array .

#include <iostream>
using namespace std;

void sum_product(const int arr[], int size){
    int sum = 0;
    int product = 1;
    for(int i = 0; i < size ; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << sum << endl;
    cout << product;
}

int main(){
    int array[] = {1,2,3,4,5};
    int size = 5;
    sum_product(array , size);
}