#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int didswap;
        for(int j=0;j<i;j++){   
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            cout<<"swap"<<endl;
            didswap=1;
            //to check if arraynis sorted in midway
            }

        }
         //to check if arraynis sorted in midway
        if(didswap==0) {
             cout<<"swap_";
             break;
            }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}