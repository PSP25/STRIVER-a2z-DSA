#include<bits/stdc++.h>
using namespace std;
int checkprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
           }
    return 1;
}           // instead of i<=sqrt(n) use i*i<n
int main(){
    int n;
    cin>>n;
    cout<<checkprime(n);

}


            // most optimised solution
// int checkprime(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return 0;
//            }
//     return 1;