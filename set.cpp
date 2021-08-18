#include <iostream>
#include <set>

using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i : s){
        cout<<i<<endl;
    }

    set<int>::iterator it = s.begin();

    s.erase(it);

    cout<<endl;

    for(auto i : s){
        cout<<i<<endl;
    }

    cout<<endl;
    cout<<"5 is present or not -> " <<s.count(5)<<endl;
     cout<<"-5 is present or not -> " <<s.count(-5)<<endl; 

     set<int>::iterator itr = s.find(5);
     cout<<"Value present at itr -> " <<*it<<endl;

     for(auto it=itr;it!=s.end();it++){
         cout<<*it<<" ";
     }cout<<endl;
}