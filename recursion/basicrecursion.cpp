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
    arr=printno2(n-1);
    cout<<n;
    return arr;

    if(n==0)
    return arr;
}
int main(){
vector<int> arr;
int n;
cin>>n;
arr=printno2(n);
}