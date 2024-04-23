//WAP to print reverse counting using recursion
#include <iostream>
using namespace std;

int rev_count(int n){
    //base case
    if (n == 1){
        cout << 1;
        return 0;
    } 
    
    cout << n;                          //processing
                                                        //recursion after processing --> TAIL RECURSION
    rev_count(n-1);                     //recursion
    
    return 0;
}

int main(){

    rev_count(5);
}

