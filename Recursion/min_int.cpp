#include <iostream>
using namespace std;

void find_min(int arr[], int size, int index, int &mini ){

    //base case
    if (index >= size)
        return;

    if (arr[index] < mini)
        mini = arr[index];

    find_min(arr, size, index +1, mini);
}

int main(){

    int arr[] = {20,30,10,5,11,15};
    int size = 6;
    int index = 0;

    int mini = INT_MAX;

    find_min(arr,size,index,mini);
    cout << mini;

}