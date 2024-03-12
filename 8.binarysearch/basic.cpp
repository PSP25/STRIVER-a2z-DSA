#include <bits/stdc++.h> 
using namespace std; 
int binarysearch(int arr[],int n,int target){
    int left=0,right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        cout<<"mid: "<<mid<<endl;
        if(arr[mid]==target)return mid;
        else if(arr[mid]<target){ 
            left=mid+1;;
        }
        else {
            right=mid-1;
            }
    }
    return -1;
}
int main(){
    int arr[]={1,3,5,7,8,9,10,23,45,77};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
   cout<<binarysearch(arr,n,23);
   return 0;
}