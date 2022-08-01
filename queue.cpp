#include<iostream>
#include<queue> //works in a First in First out manner
using namespace std;
int main()
{
    queue<string> q;
    q.push("mayuri");
    q.push("priyanka");
    q.push("ankita");
    q.push("anjani");
    cout<<"First element -> "<<q.front()<<endl;
    q.pop();
    cout<<"After pop First element -> "<<q.front()<<endl;
    cout<<"size of queue ->"<<q.size()<<endl;
    return 0;
}
