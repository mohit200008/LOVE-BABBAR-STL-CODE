#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<int> v;
    vector<int> a(5,1);
     cout<< "Elements are " <<endl;
    for(int i:a) {
        cout<<i<<" ";
    }cout<<endl;
    vector<int> last(a);
     cout<< "last Elements are " <<endl;
    for(int i:last) {
        cout<<i<<" ";
    }cout<<endl;


    
    cout<< "Capacity-> " << v.capacity()<<endl;

    v.push_back(1);
    cout<< "Capacity-> " << v.capacity()<<endl;

     v.push_back(2);
    cout<< "Capacity-> " << v.capacity()<<endl;

     v.push_back(3);
    cout<< "Capacity-> " << v.capacity()<<endl;

    cout<<"Element at 2nd Index " << v.at(2)<<endl;

    cout<< "before pop" <<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

     cout<< "After pop" <<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;

}