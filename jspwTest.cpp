#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fun(int arr[], int index, vector<int> &temp, int n, int k, int &sum, vector<vector<int>> &ans)
{   
    if (index == n)
    {
        if (sum == k)
        {
            for (auto it : temp)
            {
                cout << it << " ";
            }
             cout << endl;
            // ans.push_back(temp);
        }
       
        return;
    }
    
    temp.push_back(arr[index]);
    sum+=arr[index];
    fun(arr, index + 1, temp, n,k,sum,ans);
    temp.pop_back();
    sum-=arr[index];
    fun(arr, index + 1, temp, n,k,sum,ans);
}
int main()
{
    int arr[] = {3, 1, 2};
    vector<int> arr2;
    int sum=0;
    vector<vector<int>> ans;
    ans=fun(arr, 0, arr2, 3, 3 , sum, ans);
    return 0;
}