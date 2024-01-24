#include<bits/stdc++.h>
using namespace std;
//selection sort
//time complexity O(n^2) for all three cases
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        {   int min=i;
            for(int j=i;j<n;j++){
                if(arr[i]>arr[j])
                min=j;
            }
            swap(arr[i],arr[min]);
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

    selectionsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}