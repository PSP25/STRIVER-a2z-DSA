//advantage is O(1) in average and best case
// and O(n) in worst case in one in million case
//first preference is unordered map
//cannot use pair<> as a key

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
                        //map stores everything in sorted
//pre compute
    unordered_map<int, int> mpp;
    for(int j=0;j<n;j++){
        mpp[arr[j]]++;
    }
                        //map<char,int> can also be done
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}


