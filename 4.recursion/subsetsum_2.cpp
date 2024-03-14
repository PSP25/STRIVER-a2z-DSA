//%%%%%%%%%%%%%%%%%%%% q90 leetcode

// %%%%%%     why no base case?

//  tc=O(2^n*n)    oc=O(2^n*k)
// void helper(int index,vector<int>&temp,vector<int> &nums,vector<vector<int>> &ans){       
//             ans.push_back(temp);
//         for(int i=index;i<nums.size();i++){
//             if(i>index && nums[i]==nums[i-1])continue;
//             temp.push_back(nums[i]);
//             helper(i+1,temp,nums,ans);
//             temp.pop_back();
//         }
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int>temp;
//         sort(nums.begin(),nums.end());
//         helper(0,temp,nums,ans);
//         return ans;
//     }