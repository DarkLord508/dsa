//WAP to calculate n!
#include <iostream>
using namespace std;

int factorial(int n){

    //base case
    if (n == 1)
        return 1;

    //recursive relation --> f(n) = n * f(n-1)
    int fact = n * factorial(n-1);
    return fact;
}

int main(){
    cout<<factorial(10);
}