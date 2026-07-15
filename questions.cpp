///palindrome number

#include <iostream>
using namespace std;

int main(){
    int x = 121;
        long long reverse = 0;
        int num = x;
        while (x > 0){
            int digit = x % 10;
            x/=10;
            reverse = reverse * 10 + digit;

        }
        if(reverse == num){
            cout << true;
        }else if(num < 0){
            cout << false;
        }else{
            cout << false;
        }
    }
