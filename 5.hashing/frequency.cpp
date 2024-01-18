#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        cout<<arr[i];
    }
//hash
    // int hashno;
    // cin>>hashno;
//precomputer
        int hash[4]={0};
          for(int i=0;i<4;i++){
                  hash[arr[i]]+=1;
        }
         for(int j=0;j<4;j++){
          cout<<endl<<hash[j]<<" ";
        }
        
                return 0;
}
