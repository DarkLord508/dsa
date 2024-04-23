//WAP to print counting using recursion
#include <iostream>
using namespace std;

int count(int n){
    //base case
    if (n == 1){
        cout << 1;
        return 0;
    } 
    
    count(n-1);                     //recursion
                                                        //recursion BEFORE processing --> HEAD RECURSION
    cout << n;                      //processing
    
    return 0;
}

int main(){

    count(5);
}

