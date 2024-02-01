#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &arr, int target)
{
    int i = 0, j = (arr.size() - 1);
    vector<int> ans(2, 0);
    int sum = 0;
    while ( i < j)
    {
        sum = arr[i] + arr[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {  
             i++;   
        }
        else{
            ans[0] = i;
            ans[1] = j;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,3,4,5,2,7};
    int target=12;
    vector <int> ans(2,0);
    ans=twoSum(arr,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
}