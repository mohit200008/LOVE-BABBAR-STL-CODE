#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<string> s;

    s.push("love");
    s.push("mohit");
    s.push("lamba");

    cout<<"Top Element-> "<<s.top()<<endl;

    s.pop();

    cout<<"Top Element after pop-> "<<s.top()<<endl;

    cout<<"Empty or not" <<s.empty()<<endl;
}