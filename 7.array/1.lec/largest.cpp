#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    return largest;
}
                //brute force
int largestE(int arr[], int n) {
    // Write your code here.
    int asize = sizeof(arr) / sizeof(arr[0]); 
    sort(arr,arr+asize);
    int largest=arr[n-1];
    return largest;
}
int main(){
   int arr[]={1,3,5,2,6,78,24};
    int largest=largestE(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
