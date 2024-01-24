#include <bits/stdc++.h>
using namespace std;
int main()
{//map and multimap are similar
// multimap can have duplicate elements
//e.g {2 40} {4 40} 

                    //MAP
    // map<int, int> m;
    // for (int i = 0; i < 5; i++)
    // {
    //     m.insert({i, i * 10});
    // }
    // for (auto it : m)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout << m.size();
    // if (m.find(10) != m.begin())
    // {
    //     cout << "true";
    // }
    // if(m.empty()!=true)cout<<"2.true";
    // m.erase(m.find(2),m.find(5));
    // for (auto it : m)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // m.clear();
    // if(m.empty()==true)cout<<"2.true";


                        //MULTIMAP
//multiple elements can have the same keys.            
    multimap<int,int> mm;
    for (int i = 0; i < 5; i++)
    {
        mm.insert({i, i * 10});
    }
    mm.insert({4,50});
    for (auto it : mm)
    {
        cout << it.first << " " << it.second << endl;
    }
    
        auto it=mm.find(4);
        cout<<it->first<<" "<<it->second;
    

}