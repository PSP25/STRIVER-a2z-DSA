#include<bits/stdc++.h>
using namespace std;

int helper(int n,int arr[]){
    if(n<=1)return n; 
    arr[n]=helper(n-1,arr)+helper(n-2,arr);
}

int main(){
    
    int n;
    int arr[n];
    cin>>n;
    helper(n,arr);
    
}
