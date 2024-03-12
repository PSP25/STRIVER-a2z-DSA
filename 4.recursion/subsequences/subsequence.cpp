#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std; 

void fun(int arr[],int index,vector<int> &temp,int n){
    if(index==n){
      for(auto it: temp){
        cout<<it<< " ";
    }
    cout<<endl;
     return;
    }
    temp.push_back(arr[index]);
    fun(arr,index+1,temp,n); 
    temp.pop_back();
    fun(arr,index+1,temp,n);   
} 
int main(){
    int arr[]={3,1,2};
    vector<int> arr2;
    fun(arr,0,arr2,3);
    return 0;
}