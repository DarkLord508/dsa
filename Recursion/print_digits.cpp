#include <iostream>
#include <vector>
using namespace std;

void print_digits(int n){
    
    //base case
    if (n <= 0){
        return;
    }
        
    print_digits(n/10);
    cout << n%10 << " ";

}

int main(){
    int n = 123456;
    print_digits(n);
}