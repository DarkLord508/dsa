//WAP to print nth term of fibonacci series
#include <iostream>
using namespace std;

int fib(int n){
    //base case
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    //recursive relation --> f(n) = f(n-1) + f(n-2)
    int ans = fib(n-1) + fib(n-2);
    return ans;
    
    
}

int main(){
    cout<<fib(7);
}
