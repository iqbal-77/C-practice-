#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// // Binary search on recursion (not correct now updated later)
// int recBinary(vector<int> arr, int tar, int st, int end){
//     if(st <= end){
//         int mid = st + (end-st)/2;

//         if(tar > mid){
//             return recBinary( arr, tar, mid+1, end);
//         }
//         else if(tar < mid){
//             return recBinary(arr, tar, st, mid-1);
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }


// binar search function
int binarySearch(vector<int> arr, int tar){
    int st = 0, end = arr.size() - 1;

    while(st <= end){
        int mid = st+ (end-st)/2;
        if(tar > arr[mid]){
            st = mid+1;
        }
        else if(tar < arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    int tar = 0;
  
    cout << "target = " << binarySearch(arr, tar) << endl;
    return 0;
}