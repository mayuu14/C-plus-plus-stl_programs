#include<iostream>
#include<stack>//works on the principle of last in first out
using namespace std;
int main()
{
    stack<string> s;
    s.push("mayuri");
    s.push("ankita");
    s.push("priyanka");
    s.push("anjani");
    cout<<"top element of stack ->"<<s.top()<<endl;
    s.pop();
    cout<<"after pop top element of stack ->"<<s.top()<<endl;
    cout<<"size of stack ->"<<s.size()<<endl;
    cout<<"empty or not ->"<<s.empty()<<endl;
    return 0;
}
