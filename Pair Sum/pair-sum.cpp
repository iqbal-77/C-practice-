#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// vector<int> pairSum(vector<int> nums, int target){
//     vector<int> ans;
//     int n = nums.size();
//     for(int i=0; i <n; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
                    // return ans;
//             }
//         }
//     }
//     return ans;
// }

// vector<int> pairSum(vector<int> nums, int target){
//    vector<int> ans;
//     int j = nums.size() - 1 , i = 0;
//     while(i < j){
//        int pairSum = nums[i] + nums[j];
//        if(pairSum > target){
//         j--;
//        }
//        else if(pairSum < target){
//         i++;
//        }
//        else{
//         ans.push_back(i);
//         ans.push_back(j);
            // return ans;
        
//        }

//     }
//     return ans;
// }

// vector<int> pairSum(vector<int> nums, int target){
//     int n = nums.size();
//     int i = 0, j = n - 1;
//     vector<int> ans;

//     while(i < j){
//         int ps = nums[i] + nums[j];
//         if(ps > target){
//             j--;
//         }
//         else if(ps < target){
//             i++;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }

// void pairValue(vector<int> nums, int target){
//     int n = nums.size();
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             int ps = nums[i] + nums[j];
//             if(ps == target){
//                 cout << i << ", " << j << endl;
//             }
//         } 
//     }   
// }

// int singleValue(vector<int> nums){
//     int ans = 0, n = nums.size();

//     for(int i=0; i<n; i++){
//         ans ^= nums[i];
//     }
//     return ans;
// }

// int maxSubarr(vector<int> nums){
//     int maxSum = INT_MIN;
//     int n = nums.size();
//     for(int i=0; i<n; i++){
//         int currSum = 0;
//         for(int j =i; j<n; j++){
//             currSum += nums[j];
//             maxSum = max(currSum, maxSum);
//         }
//     }
//     return maxSum;
// }


int maxValue(vector<int> nums){
    int maxSum = INT_MIN;
    int n = nums.size();
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}
void pairValue(int arr[], int n){
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}


int majorElement(vector<int> nums){
    sort(nums.begin(), nums.end()); 
     
    // frequency
    int freq = 1;
    int n = nums.size();
    int ans = nums[0];
    for(int i=1; i<n; i++){
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
         if(freq > (n/2)){
        return ans;
        }
    }
   

    return -1;
     
   
}

vector<int> pairIndex(vector<int>& nums, int target){
    int n = nums.size();
    int idx1 = 0;
    int idx2 = 0;
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i != j){
                    int pairSum = nums[i]+ nums[j];
                if(pairSum == target){
                    idx1 = i;
                    idx2 = j;
                    return {idx1, idx2};
                }
                }
        }     
    }
    return {idx1, idx2};
}

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> ans = pairIndex(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;
  



    // vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    // cout << "max value = " << maxValue(nums) << endl;
    // vector<int> nums = {2, 7, 11, 15};
    // int target = 26;
    // pairValue(nums, target);
    // int result = singleValue(nums);
    // cout << "single value = " << result << endl;
    
    // vector<int> ans = pairSum(nums, target);
    // if(nums.size() > 0){
    //     cout << ans[0] << ", " << ans[1] << endl;
        
    // }
    // else{
    //     cout << "no pair found!";
    // }





    // vector<int> ans = pairSum(nums, target);
    // cout << ans[0] << ", " << ans[1] << endl;
    
   
    

    // vector<int> vec;
    // for(int st=0; st<n-1; st++){
    //     for(int end=st+1; end<n; end++){
    //         if((arr[st] + arr[end]) == target){
    //             vec.push_back(st);
    //             vec.push_back(end);
    //         }              
    //     }
    // }
    // for(int val: vec){
    //     cout << "index = " << val << " " ;
    //     cout << val << " ";
    // }






    // int arr[] = {2, 7, 11, 15};
    // int n = 4;
    
    // for(int st=0; st<n-1; st++){
    //     for(int end=st+1; end<n; end++){
    //         for(int i=st; i<=end; i++){
    //             cout << arr[i];
    //         }
    //         cout << " ";
              
    //     }
    //     cout << endl;
    // }
      
    
    return 0;
}