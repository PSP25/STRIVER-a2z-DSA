#include<iostream>
using namespace std;

int main(){
    char s[10]={'a'};
    char s1[10]="Hello";
    char s3[10]={98,99,108,107,'\0'};
    char s2[10]={65,66,67,68,69,0,23,24};
cout<<s<<endl<<s1<<endl<<s2<<endl<<s3<<endl;
    char s4[100];
    char s5[100];
     cin.getline(s5,100);
    cout<<s5;
    cin>>s4;
    cout<<endl<<s4;
}