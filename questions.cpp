// 19. question in pattern;

#include <iostream>
using namespace std;

int main(){
    int n =  5;
    for(int i = 0;i< n; i++ ){
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        for(int j = 0; j<2*i; j++){
            cout << " ";
        }
        for(int j = 0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    int m =5 ;
    for(int i = 1 ; i<=m ; i++ ){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int j = 0; j<2*(n-i); j++){
            cout << " ";
        }
        for (int j = 0; j< i; j++){
            cout << "*";
        }
        cout << endl;

    }
}