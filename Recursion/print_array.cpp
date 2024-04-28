#include <iostream>
using namespace std;

int printarr(int arr[], int size, int index){

    if (index >= size)
        return 9;

    cout << arr[index];
    printarr(arr,size,index+1);

    return 0;
}

int main(){
    int arr[] = {1,2,3,4};
    int size = 4;
    int index = 0;

    printarr(arr,size,index);
}