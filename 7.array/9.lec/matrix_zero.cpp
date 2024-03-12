#include <bits/stdc++.h> 
using namespace std; 
void mark_row(int arr[3][4],int row,int col){
    for(int i=0;i<col;i++){
        if(arr[row][i]!=0)arr[row][i]=-1;
    }
}
void mark_col(int arr[3][4],int row,int col){
    for(int i=0;i<row;i++){
        if(arr[i][col]!=0)arr[i][col]=-1;
    }
}
void matrix_zero(int arr[3][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                mark_row(arr,i,4);//O(m)
                mark_col(arr,3,j);//O(n)
            }
        }
    }//O(n*m*(n+m))
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==-1)arr[i][j]=0;
        }
    }//O(n*m)
}
int main(){
    int arr[3][4]={{1,0,1,1},{1,1,1,1},{0,0,1,0}};
    matrix_zero(arr,3,4);
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//TC=O(n*m)+O(n*m*(n+m))