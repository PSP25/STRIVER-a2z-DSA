// //%%%%%%%%%%%%%%%%%%%% subsetsum_1
//      


// void helper(int index,vector<int>&num,int sum,vector<int>&ans){
// 	if(num.size()==index){
// 		ans.push_back(sum);
// 		return;
// 	}
// 	helper(index+1,num,sum+num[index],ans);
// 	helper(index+1,num,sum,ans);
// }
// vector<int> subsetSum(vector<int> &num){
// 	// Write your code here.
// 	int sum=0;
// 	vector<int> ans;
// 	helper(0,num,sum,ans);
// 	sort(ans.begin(),ans.end());
// 	return ans;	
// }