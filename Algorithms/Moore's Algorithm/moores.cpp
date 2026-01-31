#include <iostream>
#include <vector>
using namespace std;

//moore's law

int majorElement(vector<int> nums){
    int n = nums.size();
    int freq = 0, ans = 0;

    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    
   
    // in case if ans doesn't exsit

    int count = 0;
    for(int val: nums){
        if(val == ans){
            count++;
        }
    }
    if(count > (n/2)){
        return ans;
    }
    else{
        return -1;
    };

}

int main() {
    vector<int> nums = {1, 2};
    cout << majorElement(nums) << endl;
     
    return 0;
}
