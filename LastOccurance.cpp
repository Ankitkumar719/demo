#include<iostream>
using namespace std;

int lastOccurance(int arr[], int size, int target){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,4,4,4,4,5};
    int size = 8;
    int target = 4;

    int result = lastOccurance(arr, size, target);

    if(result == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is found at "<<result<<" index"<<endl;
    }
    return 0;
}