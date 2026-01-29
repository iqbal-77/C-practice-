#include <iostream>
#include <vector>
using namespace std;

int main() {
    //// single number
    int n = 7;
    int arr[] = {1, 1, 2, 2, 3, 3, 4};
    int ans = 0;
    for(int i=0; i<n; i++){
        ans ^= arr[i];
    }
    cout << ans << endl;

    // // Kadane's Algorithm
    int n = 5;
    int arr[] = {1, -2, 3, -4, 5};
    int maxSum = INT_MIN, currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "maxSum = " <<  maxSum << endl;

    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int curSum =0, maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        curSum += arr[i];
        maxSum = max(curSum, maxSum);
        if(curSum < 0){
            curSum = 0;
        }
    }
     cout << "max subarr sum = " << maxSum << endl;
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for(int st= 0; st<n ; st++){
        for(int end=st; end<n; end++){
            for(int i =st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;
    for(int st=0; st<n; st++){
        int curSum = 0;
        for(int end=st; end<n; end++){
           curSum += arr[end];
           maxSum = max(maxSum, curSum); 
        }
        
    }
    cout << "max subarray sum = " << maxSum << endl;
    return 0;
}