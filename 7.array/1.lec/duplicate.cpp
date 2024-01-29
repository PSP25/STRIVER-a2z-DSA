#include <bits/stdc++.h> 
using namespace std;

                                 //bruteforce
// int delete_duplicate(int arr[],int n){
//     set<int> st;
//     for(int i=0;i<n;i++){
//     st.insert(arr[i]);
//     }
//     int index=0;
//     for(auto it:st){
//         arr[index]=it;
//         index++;
//     }
//     return index;

// }

//                                 //better
int removeDuplicates(int arr[], int n) {
	int i=0;
	int j=1;
	for(j=1;j<n;j++){
	if(arr[j]!=arr[i]){
       arr[i+1]=arr[j];
		i++;
	}
    }
	return i+1;
}

int main(){
    int arr[10]={1,1,2,2,2,3,3,6,6,6};
    int index= removeDuplicates(arr,10);
    cout<<index;
}