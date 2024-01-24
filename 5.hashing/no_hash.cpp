#include <bits/stdc++.h>
using namespace std;
void hash_no(int arr[],int n,int m){
    int hash[m+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        cout<<hash[i]<<" ";
    }
}   //at max we can go till array of 10^7 size
int main(){
    int n;
    cin>>n;
    int*  ptr;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=0;
    for(int i=0;i<n;i++){
        m=max(m,arr[i]);
    }
    hash_no(arr,n,m);
    
}