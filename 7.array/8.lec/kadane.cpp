#include <bits/stdc++.h> 
using namespace std;
//best approach O(n)
long long max_subarr1(int arr[],int n){
    long long sum=0;
    long long max=LONG_MIN;
    int start,end;
    for(int i=0;i<n;i++){
        if(sum==0)start=i;
        sum+=arr[i];
        if(sum>max){
            max=sum;
            end=i;}
        if(sum<0) sum=0;
    }if(max<0)return 0;
    cout<<arr[start]<<" "<<arr[end]<<endl;
    return max;
}
//brutforce
int max_subarr(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
       int  sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>max)max=sum;
        }
    }if(max<0)return 0;
    return max;
}
int main(){
    int arr[]={1,-6,2,-3,4,1,-5,-2};
int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_subarr1(arr,n);
}