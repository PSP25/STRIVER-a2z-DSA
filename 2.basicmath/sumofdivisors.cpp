#include<bits/stdc++.h>
using namespace std;
// int sumOfAllDivisors(int n){
// 	// Write your code here.
// 	int sum=1;
// 	for(int i=2;i<=sqrt(n);i++){
// 	int x=1;
// 	for(x=1;x<=i;x++){
//           if (i % x == 0) {
//             if(x!=(i/x))
//             sum = sum + x + (i / x);
//             else
//             sum = sum + x ;          
//             cout<<sum<<endl;
//           }
//         }
//         } 
//         return sum;	
// }


// int sumOfAllDivisors(int n){
// 	// Write your code here.
// 	int sum=0;
// 	  for(int i=1;i<=sqrt(n);i++){
//       if(n%i==0&&(n/i!=i)){
//       sum=sum+i+(n/i);
//       cout<<sum<<endl;
//       }
//     else if(n%i==0 && (n/i==i)){
//         sum=sum+i; 
//         cout<<" "<<sum<<endl;
//     }       
// }
//   return sum;	
// }


void divisors(int n){
  vector<int> ls;
                 //o(sqrt(n))
  for(int i=1;(i*i)<=n;i++){
    if(n%i==0&&(i!=n/i)){
      ls.push_back(i);
      ls.push_back(n/i);
    }
    else if(n%i==0&&(i==n/i)){
       ls.push_back(i);
    }
  }
   sort(ls.begin(),ls.end());//O(no.of factors*log(no.of factors))
  for(auto it:ls){
    cout<<it<<"  ";
  }

}

int main(){
    int n;
    cin>>n;
    int sum;
   divisors(n);
    cout<<sum;
}