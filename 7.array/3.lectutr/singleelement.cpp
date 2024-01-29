#include<vector>
#include<iostream>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.
	 int n = arr.size();

    int i = 0;

    int j = 1;

    while(i<n&&j<n){

        if(arr[i]==arr[j]){

            i=i+2;

            j=j+2;

        }else{

            if(arr[j]==arr[j+1]){

                return arr[i];

            }

        }

    }

    return arr[n-1];
}

int main(){
    vector<int>arr={1,1,2,3,3,4,4};
    int ans;
    ans=getSingleElement(arr);
    cout<<ans;
}


//understand this solution well 
//O(logn)
//other solution arr in leetcode and coding ninjas