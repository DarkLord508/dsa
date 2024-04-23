//WAP to print number of first n intergers usnig recursion
#include <iostream>
using namespace std;

int sum_of_n(int n){

    //base case
    if (n == 1)
        return 1;

    //recursive relation --> f(n) = n + f(n-1)
    int ans = n + sum_of_n(n-1);
    return ans;
}

int main(){
    cout<<sum_of_n(5);
}