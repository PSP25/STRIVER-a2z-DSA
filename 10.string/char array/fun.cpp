#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;
int main(){
    //1  strlen()
    char s[50]="hello world";
    cout<<strlen(s)<<endl;

    //2  cin.getline()
    char s1[100];
    cin.getline(s1,100);
    cout<<endl<<strlen(s1);

    //3  strcat(dentin,source), strncat(destin,source,n)
    char s3[100]="good";
    char s4[100]="morning";
    cout<<endl<<strcat(s3,s4)<<endl; 
    cout<<strncat(s3,s4,5);

    //4  strcpy(destin,source), strncpy(destin,source,n)
    char s6[100]="good";
    char s7[100]="";
    char s8[100]="";
    strcpy(s7,s6);
    strncpy(s8,s6,3);
    cout<<endl<<s7<<" "<<s8;

    //5 strstr(main,sub)   //checks for a string in a string
    char s9[100]="good";
    if(strstr(s9,"oo")){
        cout<<endl<<"found "<<strstr(s9,"oo")<<endl;
    }
    else cout<<"notfound";

    if(strchr(s9,'o')){
        cout<<"found "<<strchr(s9,'o')<<endl;
    }
    else cout<<"notfound";

    if(strrchr(s9,'o')){
        cout<<"found "<<strrchr(s9,'o')<<endl;
    }
    else cout<<"notfound";

    //6 strcmp(str1,str2)
    cout<<strcmp(s3,s4)<<endl;

    //7 strtol(const char *, char **, int),
    //          strtof(const char *, char **, int)
        char str10[100]="126";
        char str11[100]="23.67";
    cout<<strtol(str10,NULL,10)<<endl;
    cout<<strtof(str11,NULL)<<endl;

    //8 tokenising   strtok(char* ," ")
    char s12[100]="x=10;y=12;z=13";
    char *token= strtok(s12,"=;");
    while(token!=nullptr){
        cout<<token<<endl;
        token=strtok(nullptr,"=;");
    }
    
    char s13[100]="x=10;y=12;z=13";
    char *token1= strtok(s13,";");
    while(token1!=nullptr){
        cout<<token1<<endl;
        token1=strtok(nullptr,";");
    }
} 