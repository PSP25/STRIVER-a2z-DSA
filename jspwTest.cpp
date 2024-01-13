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
  // insert in vector
        v={1,2,3};
        v[3]=v[1]+v[2];
          //cout<<v[3];
        v.push_back(7);
         // cout<<" "<<v[3];
    vector<pair<int,int>>v1;
        v1={{1,2}};
          //cout<<" "<<v1[0].first<<endl;
  //initialize
    vector<int>v2(5,100);
        v2[4]=99;
        //for(auto it:v2)     //loop through vector by for each
         // cout<<it<<" ";

    vector<int>v3(2,20); 
    vector<int>v4(v3);
       // for(auto it:v4)     //loop through vector by for each
         // cout<<it<<" ";
  //access element(array,iterator,loop,auto)
    vector<int>::iterator it1=v4.begin();//iterator
         // cout<<endl<<*it1;
    vector<int>v5={1,2,3,4,5};
    vector<int>::iterator it2=v5.begin();                      
          cout<<endl<<*it2;
    for(auto it3=v2.begin();it3!=v2.end();it3++){//loop,auto
      //cout<<endl<<*it3<<" ";
    }
    //erase
    v2.erase(v2.end());
      //for(auto it:v2)     
          //cout<<it<<" ";
}

int main(){
 // Pair();
  vectorcontainer();
}


