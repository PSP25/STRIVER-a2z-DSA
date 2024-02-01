#include <bits/stdc++.h> 
using namespace std;
//bestsoln
void sorting3(int arr[],int n){
    int low=0,mid=0,high=n;
    for(int i=0;i<n;i++){
        if(arr[mid]==0) {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
               }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high-1]);
            high--;
           
        }
    }
} 
//better
void sorting(int arr[],int n){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)count0++;
        else if(arr[i]==1)count1++;
        else count2++;
    }
    cout<<count0<<" "<<count1<<" "<<count2<<endl;

    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    
    for(int i=count0;i<n-count2;i++){
        arr[i]=1;
    }
    for(int i=n-count2;i<n;i++){
        arr[i]=2;
    }
    
}
//bruteforce
void sorting2(int arr[],int n){
    sort(arr,arr+n);
}
int main(){
int arr[]={1,2,1,0,0,1,0,2,1,1,2};
int n=sizeof(arr)/sizeof(arr[0]);
sorting3(arr,n);
for(auto i:arr){
    cout<<i<<" ";
}
}

