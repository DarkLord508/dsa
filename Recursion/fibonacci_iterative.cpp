#include <iostream>
using namespace std;

int fib_itr(int n){

    int prev1 = 0;
    int prev2 = 1;
    int ans = 0;

    if (n == 1)
        return prev1;

    if (n == 2)
        return prev2;


    for (int i = 1; i < n; i++){
        ans = prev1 + prev2;
        prev1 = prev2;
        prev2 = ans;

        cout<<ans<<" ";
    }
    cout<<endl;
    return ans;
}

int main(){
   
    cout << fib_itr(6);
}

