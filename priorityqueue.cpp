#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //Max Heap always the greatest element will return
    priority_queue<int> maxp;   //A queue in which the first element is always the greatest default related with(max heap)
    //Min Heap
    priority_queue<int,vector<int>,greater<int>> minp;

    maxp.push(12);
    maxp.push(16);
    maxp.push(11);
    maxp.push(10);
    maxp.push(8);
    int n=maxp.size();
    for(int i=0;i<n;i++)
    {
        cout<<"top element of MAX HEAP ->"<<maxp.top()<<" "<<endl;
        maxp.pop();
    }cout<<endl;



    minp.push(12);
    minp.push(16);
    minp.push(11);
    minp.push(10);
    minp.push(8);
    int s=minp.size();
    for(int i=0;i<s;i++)
    {
        cout<<"top element of MIN HEAP ->"<<minp.top()<<" "<<endl;
        minp.pop();
    }cout<<endl;

    cout<<"Is Max heap empty ?? ->"<<maxp.empty()<<endl;
    cout<<"Is Min heap empty ?? ->"<<minp.empty()<<endl;
    return 0;
}
