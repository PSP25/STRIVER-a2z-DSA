//             // //check if atleast one subseq exists
// bool helper(vector<int> &a,int index,int n,int k,int &sum, vector<int>&temp){
//     if(index==n){
//         if(sum==k)return true;
//         return false;
//     }
//     temp.push_back(a[index]);
//     sum+=a[index];
//     if(helper(a,index+1,n,k,sum,temp)==true)return true;

//     sum-=a[index];
//     temp.pop_back();

//     if(helper(a,index+1,n,k,sum,temp))return true;
//     return false;
// }
// bool isSubsetPresent(int n, int k, vector<int> &a)
// {
//     // Write your code here
//     int sum=0;
//     vector<int> temp;
//     return helper(a,0,n,k,sum,temp);

// }