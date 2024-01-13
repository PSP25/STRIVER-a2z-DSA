#include<iostream>
using namespace std;
void pattern1(int n){
   for(int i=0;i<n;i++){
        for (int j = 0; j <n-i ; j++)
        {
            cout<<j;
        }
        cout<<endl;
   } 
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for (int j = 0; j <n-i-1 ; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        for (int m = 0; m < n-i-1; m++)
        {
            cout<<" ";
        }
        
        
        cout<<endl;
   } 

}
void pattern3(int n){
    for(int i=0;i<n;i++){
        for (int j = 0; j <i ; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <2*n-(2*i+1); k++)
        {
            cout<<"*";
        }
        for (int m = 0; m < i; m++)
        {
            cout<<" ";
        }
        
        
        cout<<endl;
   } 
}
void pattern4(int n){
    for(int i=0;i<n;i++){
        for (int j = 0; j <n-i-1 ; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        for (int m = 0; m < n-i-1; m++)
        {
            cout<<" ";
        }
        cout<<endl;
   } 
   for(int i=0;i<n;i++){
        for (int j = 0; j <i ; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <2*n-(2*i+1); k++)
        {
            cout<<"*";
        }
        for (int m = 0; m < i; m++)
        {
            cout<<" ";
        }
        
        
        cout<<endl;
   } 
}
void pattern5(int n){
    for(int i=0;i<=2*n-1;i++){
     int star=i;
        if(i>n) star=2*n-i;
             for(int j=0;j<star;j++){
             cout<<"*";
        }
        cout<<endl;
    }

}
void pattern6(int n){
    for(int i=1;i<=n;i++){
        int star;
            if(i%2==0) star=0;
            else star=1;    
        for (int j = 0; j < i; j++)
        {   
            cout<<star;
            if(star==0)star=1;
            else star=0; 
        }  
        cout<<endl;      
    }

}
void pattern7(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for (int k = 1; k <= 2*(n-i); k++)
        {
            cout<<" ";
        }
        for (int m = i; m >0 ; m--)
        {
            cout<<m;
        }
        
        cout<<endl;
    }
    


}
void pattern8(int n){
    for (int i = 0; i < n; i++)
    {   int temp=i;
        for (int j = 0; j <=i; j++)
        {   
            cout<<temp;
            temp++;
        }
       cout<<endl; 
    }
    

}
int main(){
    int n;
    cin>>n;
    pattern8(n);
}