//        comb_sum_1
//        q30

// void helper(int index, int target,vector<int> &temp,vector<vector<int>> &ans,vector<int> &arr){
//     if(target==0){
//         ans.push_back(temp);
//         return;
//     }
//     for(int i=index;i<arr.size();i++){
//         if(i>index && arr[i]==arr[i-1])continue;
//         if(arr[i] > target)break;
//         temp.push_back(arr[i]);
//         helper(i+1,target-arr[i],temp,ans,arr);
//         temp.pop_back();    
//     }
// }
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         vector<int>temp;
//         vector<vector<int>>ans;
//         helper(0,target,temp,ans,candidates);
//         return ans;
//     }