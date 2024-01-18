#include<bits/stdc++.h>
using namespace std;
int helper(int n,vector<int>&arr){
    if(n<=1)return n; 
    arr.push_back(helper(n-1,arr)+helper(n-2,arr));
}
vector<int> generateFibonacciNumbers(int n) {
   vector<int> arr;
   int j=helper(n,arr);
  for(auto it:arr){
    cout<<it<<" ";
}
}