#include<bits/stdc++.h>
using namespace std;

//print 1 to n
vector<int> printno(int n){
    vector<int> arr;
    if(n==0)
    return arr;

    arr=printno(n-1);
    cout<<n;
    return arr;
}
//print n to 1
vector<int> printno2(int n){
    vector<int> arr;
    if(n==0)
    return arr;

    cout<<n;
    arr=printno2(n-1);
    return arr;

    //coding ninja solution
//    void helper(int i,int x, vector<int> &arr){
//         if(i>x)return;
//         helper(i+1,x,arr);
//         arr.push_back(i);
//     };
// vector<int> printNos(int x) {
//     // Write Your Code Here
//     vector<int> arr;
//     helper(1,x,arr);
//     return arr;
// } 
}
//without using i+1
void help(int i,int n){
    if(i<1)
    return;

    cout<<i;
    help(i-1,n);
    
}
//reverse array
// void help(int i,int n,vector<int> &nums){
//    if(i>=n-1)return;
//    swap(nums[i],nums[n-1]);
//    help(i+1,n-1,nums);
// }
void help(int i,int n,vector<int> &nums){  
    if(i>n/2)
    return;
   int j=n-i-1; 
   int temp= *(nums.begin()+i);
        *(nums.begin()+i)=*(nums.begin()+j);
        *(nums.begin()+j)=temp;
    help(i+1,n,nums);
}
void help(int i,int n,vector<int> &nums){
    
    if(i>=n/2)
    return;

   int j=n-i-1; 
   int temp= nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    help(i+1,n,nums);
}
//palindrome check
int help1(string &str,int n,int i){   
    if(i>=n/2){
        cout<<"done"<<endl;
        return 1;
    }
    if(str[i]!=str[n-i-1]){
        cout<<"not palindrome"<<endl;
    return 0;
    }
    help1(str,n,i+1);
}
int main(){

vector<int> nums={1,2,3,4,5,6};

help(0,6,nums);

// string str="racecar";
// int n=str.length();
// cout<<1;
// int res=help1(str,n,0);
// for(auto it:str){
//     cout<<it<<" ";
// }



// cin>>n;
//arr=printno2(n);
// help(0,6,nums);
for(auto it:nums){
    cout<<it<<" ";
}
}