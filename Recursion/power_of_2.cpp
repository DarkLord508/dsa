//WAP to calculate nth power of 2 using recursion
#include <iostream>
using namespace std;

int pow(int n){
    //base case
    if (n  == 0)        //any number to power 0 is 0
        return 1;

    //recursive relation --> f(n) = 2 f(n-1)
    int ans = 2 * pow(n-1);
    return ans;
}

int main(){
    cout<<pow(5);
}