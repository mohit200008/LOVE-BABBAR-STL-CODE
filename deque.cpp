#include<iostream>
#include<deque>

using namespace std;

int main () {
    deque<int> d;

    d.push_back(5);
    d.push_front(6);

    for(int i:d){
        cout<<i<<" ";
    }
    
    d.pop_front();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"Print first index element -> " << d.at(0)<<endl;

    d.push_front(4);
    d.push_back(7);

    cout<<"front " << d.front()<<endl;
    cout<<"back "<< d.back()<< endl;

    cout<<"Empty or not " << d.empty()<<endl;

    cout<<"before erase" << d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase" << d.size()<<endl;

}