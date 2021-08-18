#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main () {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<"Finding 2 "<<binary_search(v.begin(),v.end(),2)<<endl;

    cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
    cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),2)-v.begin()<<endl;

    int a=3;
    int b=4;

    cout<<"Max -> "<<max(a,b);

    cout<<endl;

    cout<<"Min -> "<<min(a,b);

    cout<<endl;

    swap(a,b);
    cout<<"a-> "<<a<<endl;

    string abcd= "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string-> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    sort(v.begin(),v.end());
     for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }

    


}