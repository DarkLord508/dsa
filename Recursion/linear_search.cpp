#include <iostream>
using namespace std;

bool search(int arr[], int size, int index, int target){

    cout << arr[index]<< endl;
    if (index>=size)
    {
        cout << "no";
        return false ;
    }
        

    if (arr[index] == target)  {
        
        cout<<"yessss";
        return true ;
    }
        

    search(arr, size, index+1, target);

    // return true;
}

int main(){

    int target = 5;

    int arr[] = {1,2,3,4,5};
    int size = 5;
    int index = 0;

    cout<< search(arr,size,index, target);
}