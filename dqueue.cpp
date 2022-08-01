#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(4);
    for(int i:d)
    {
        cout<<"traversing double ended queue ->"<<i<<endl;
    }
    d.pop_back();
    for(int i:d)
    {
        cout<<"traversing double ended queue after pop ->"<<i<<endl;
    }
    d.push_back(6);
    d.pop_front();
    for(int i:d)
    {
        cout<<"traversing double ended queue after pop_front ->"<<i<<endl;
    }
    d.push_back(6);
    d.push_back(7);
    d.push_back(8);
    d.push_back(9);
    for(int i:d)
    {
        cout<<"traversing double ended queue"<<i<<endl;
    }
    cout<<"element at first index in deque ->"<<d.at(1)<<endl;
    cout<<"first element of deque ->"<<d.front()<<endl;
    cout<<"last element of deque ->"<<d.back()<<endl;
    cout<<"empty or not ->"<<d.empty()<<endl;
    cout<<"size of deque->"<<d.size()<<endl;
    //Note there is no capacity function in deque
    cout<<"before erase size of deque ->"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//in this we have to give arguments(begin()and end()) from where we have to erase and till where we have to stop erasing
    cout<<"after erase size of deque ->"<<d.size()<<endl;
        for(int i:d)
    {
        cout<<"traversing double ended queue ->"<<i<<endl;
    }

    return 0;
}
