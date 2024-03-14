        // comb_sum_3 
        // q216

// void helper(int j, int n, vector<int>& temp,vector<vector<int>> &ans,int k) {
//         if (k==0) {
//             if (n == 0) {
//                 ans.push_back(temp);
//             }
//             return;
//         }
//         int i=j;
//         while(i<=9){
//             if(i<=n){
//                 temp.push_back(i);
//                 helper(i+1,n-i,temp,ans,k-1);
//                 temp.pop_back();
//                 i++;
//             }
//             else break;
//         }        
//     }
//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<int> temp;
//         vector<vector<int>> ans;
//         helper(1,n,temp,ans,k);
//         return ans;
//     }