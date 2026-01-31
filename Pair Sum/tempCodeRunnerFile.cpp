
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