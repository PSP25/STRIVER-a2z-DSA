#include<bits/stdc++.h>
using namespace std;
int helper(int index,long long sum,long long k,vector<int>&a , int n ){
    if(n==index){ 
        if(sum==k)return 1;
        else return 0;
    }
    sum+=a[index];
    int l=helper(index+1,sum,k,a,n);
    sum-=a[index];
    int r=helper(index+1,sum,k,a,n);
    return l+r;
}
int main() {
    // Write your code here
     vector<int> a={3,1,2};
    int k=3;
    int sum=0;
    int count=helper(0,0,k,a,a.size());
    cout<<count;
    
    return 0; 
}