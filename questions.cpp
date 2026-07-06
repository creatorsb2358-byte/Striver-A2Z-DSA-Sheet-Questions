// binary to decimal:

#include <iostream>
using namespace std;

int main(){
    int binary ;
    cout << "choose binary for conversion:";
    cin >> binary;
    int power = 1;
    int decimal = 0;
    while (binary > 0){
        int remainder = binary % 10;
        binary /= 10;
        decimal += remainder*power ;
        power *= 2;

    }
    cout << decimal ; 
}