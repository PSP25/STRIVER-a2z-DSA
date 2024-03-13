//%%%%%%%%%%%%%%%%%%%%%%%%% type 1 O(2^t*k) sc=O(n*x) %%%%%%%%%%%%%%%%%%%%%%%%%%%5
//         if(index==arr.size()){
//             if(target==0)ans.push_back(temp);
//             return;
//         }      
//         if(arr[index]<=target){
//             temp.push_back(arr[index]);
//             helper(index,target-arr[index],temp,ans,arr);
//             temp.pop_back();
//         }
//          helper(index+1,target,temp,ans,arr);



////%%%%%%%%%%%%%%%%%%% type2 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//         // if(target==0){
//         //     ans.push_back(temp);
//         //     return;
//         // }

//         // for(int i=index;i<arr.size();i++){
//         //     if(arr[i]<=target){
//         //         temp.push_back(arr[i]);
//         //         helper(i,target-arr[i],temp,ans,arr);
//         //         temp.pop_back();
//         //     }
//         // }
//   }
//%%%%%%%%%%%%%%%%%%%%%%%%%%% main code %%%%%%%%%%%%%%%%%%%%%%%%55
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         helper(0,target,temp,ans,candidates);
//         return ans;
//     }
