// WAP to convert digits given in a vector into a number
//input = [2,5,6] 
//output = 256

#include <iostream>
#include <vector>
using namespace std;

int get_num (vector <int> vec1){

    int num = 0;

    //base case
    if (vec1.size() <= 0)
        cout<< num;

    num = num*10 + vec1[0];

    vec1.push_back(0);

    get_num(vec1);
    
    
    for (int x : vec1)
        cout<< x;
    
    // cout << num;
    return num;
}

int main(){

    vector <int> n = {2,5,6};
    cout<<get_num(n);
}

