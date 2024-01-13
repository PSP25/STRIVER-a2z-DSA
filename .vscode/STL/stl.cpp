#include<bits/stdc++.h>
using namespace std;
//study STL
//pair,nestedpair,pairarway,
void Pair(){
    //pair
    pair<int,int> p={1,3};
     cout<<p.first<<p.second;
     //nested pair
    pair<int,pair<int,int>> q={3,{1,2}};
     cout<<endl<<q.second.first<<q.second.second;
    //pair array
    pair<int,int>arr[3]={{1,2},{3,4},{5,6}};
     cout<<endl<<arr[1].second;
}
void vectorcontainer(){
    vector<int> v;
    int n;
    cin>>n;
  //initialize and insert in vector
    v={1,2,3};
    v[3]=v[1];
    v.push_back(7);
    cout<<v[3];

}

int main(){
 // Pair();
  vectorcontainer();
}


