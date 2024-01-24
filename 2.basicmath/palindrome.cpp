#include<bits/stdc++.h>
using namespace std;

// bool palindrome(int n)
// {   bool x=true;
//     // Write your code here
//       int temp=n,revn=0;

//     while(temp!=0){
//         revn=revn*10+temp%10;
//         temp=temp/10;
//     } 
//     cout<<revn;
//     if(temp==revn)
//         return true;
//     else {
//         return false;
//     }
// }
int main(){
    int n;
    cin>>n;
    bool m=true;
     int temp=n,revn=0;

    while(temp!=0){
        revn=revn*10+temp%10;
        temp=temp/10;
    } 
    cout<<revn;
    if(revn==temp){
      cout<<m;
    }
    else cout<<m;

}


//most optimized code 0ms

// bool isPalindrome(int x) {
//      unsigned int temp=x,revn=0;
//     while(temp!=0 && x>0){
//         revn=revn*10+temp%10;
//         temp=temp/10;
//     }  
//     return (revn==x);