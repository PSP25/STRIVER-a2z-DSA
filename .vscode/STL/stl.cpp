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
          cout<<v[3];
        v.push_back(7);
         cout<<" "<<v[3];
    vector<pair<int,int>>v1;
        v1={{1,2}};
          cout<<" "<<v1[0].first<<endl;
  //initialize
    vector<int>v2(5,100);
        v2[4]=99;
        for(auto it:v2)     //loop through vector by for each
          cout<<it<<" ";

    vector<int>v3(2,20); 
    vector<int>v4(v3);
        for(auto it:v4)     //loop through vector by for each
          cout<<it<<" ";
  //access element(array,iterator,loop,auto)
    vector<int>::iterator it1=v4.begin();//iterator
          cout<<endl<<*it1;
    vector<int>v5={1,2,3,4,5};
    vector<int>::iterator it2=v5.begin()+2;                      
          cout<<*it2;
        for(auto it3=v2.begin();it3!=v2.end();it3++){//loop,auto
          cout<<endl<<*it3<<" ";
    }
  //erase
        v5.erase(v5.begin(),v5.begin()+4);
          for(auto it:v5)     
          cout<<endl<<it<<" ";
}
void insertion(){
  //.insertion function,copy,.clear,.empty,swap,
  //.size function,.pop_back
  vector<int> v={100,200};
  vector<int> v2={500,300};
     v.insert(v.begin()+1,100);       //insertion
  for(auto it=v.begin();it!=v.end();it++){
       cout<<*it<<" ";    
  }    cout<<" s="<<v.size()<<endl;
      
     v.insert(v.begin()+2,2,10);      //multiple insert
  for(auto it2:v){
       cout<<it2<<" ";   
  }
       cout<<" s="<<v.size();         //size
     v.pop_back();                    //pop
       cout<<"\n after pop s="<<v.size()<<endl;
  //swap function
  vector<int> v1={50,30};
     v2.swap(v1);
  for(auto it1:v2){
    cout<<it1<<" ";
  }

      

}
void listcontainer(){
list
.push_back,.emplace_back,.begin
.end,.insert,.size,.swap
  list<int> ls;
    ls={1,2};
    ls.push_front(35);
    ls.emplace_front(24);
    ls.push_back(5);
    ls.emplace_back(6); 
    ls.insert(ls.end(),2,10);
  for(auto it:ls){
    cout<<" "<<it;
  }  
cout<<endl<<" s="<<ls.size();
    ls.erase(ls.begin());
  for(auto it:ls){
    cout<<" "<<it;
  }
  cout<<endl<<" s="<<ls.size();
 list<int>ls1,ls2;
ls1={3,4};
ls2={5,6};
ls1.swap(ls2);
  for(auto it1:ls1){
    cout<<" "<<it1;
  } 

   // ls.insert(ls.begin()+1,5);
                                // this form doesnot 
                                //work here as it is
                                //linked list not 
                                //contiguous address
 }
int main(){
 // Pair();
 // vectorcontainer();
 //   insertion();
 //   listcontainer();
 // dequeue();
 // stack();
 //queue();
 //set();
 //multiset
 //priority_queue
  //map
  //multimap
  //algos
  //sorting
}

