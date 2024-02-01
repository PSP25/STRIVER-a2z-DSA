#include <bits/stdc++.h> 
using namespace std;
//bruteforce   TC=O(n^2)  SC=O(1)
int majority1(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i])count++;
        }
        if(count>n/2)return arr[i];
    }return -1;
}
//average    O(nlogn) if map,
// O(n) in avg and best case if unorsered map
//SC=O(n)
int majority2(int arr[],int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second>n/2)return it.first;
    }return -1;

}
//optimal solution (moore_majority voting )  TC=O(n) 
int majority3(int arr[],int n){
    int el;
    int count=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(count==0)el=arr[i];
        if(arr[i]==el)count++;
        else count--;
    }
    if(count==0)return -1;
    else return el;   
}
// intresting soln on leetcode
int majority4(int nums[],int n){
        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i-1]) {
                sorted = false;
                break;
            }
        }
        if (!sorted) {
            sort(nums, nums+n);
        }
        return nums[n / 2];
    }
int main(){
int arr[]={1,2,1,10,10,1,10,10,10,10,2};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<majority4(arr,n);
  
}