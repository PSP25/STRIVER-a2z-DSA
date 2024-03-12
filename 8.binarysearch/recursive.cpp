#include <bits/stdc++.h> 
using namespace std; 
int binarysearch(int arr[],int lb,int ub,int target){
    if(lb>ub)return -1;
    int mid=(lb+ub)/2;
    if(arr[mid]==target)return mid;
    else if(arr[mid]>target)return binarysearch(arr,lb,mid-1,target);
    else return binarysearch(arr,mid+1,ub,target);
}
//TC=O(LOGN)
//SC=O(logn) as recursion is done in stack
int main(){
    int arr[]={1,3,5,7,8,9,10,23,45,77};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
   cout<<binarysearch(arr,0,sizeof(arr),23);
   return 0;
}

