#include<iostream>
#include<list>//Note there is no at() function in list we cannot directly access the element
using namespace std;
int main()
{
    list<int> l;
    list<int> l1(5,100);//initialize list l1 with size 5 and initialize it with 100
    list<int> l2(l1);//copies the element of list l1 into list l2
    for(int i:l2)
    {
        cout<<"print l2 ->"<<i<<endl;
    }
    l.push_back(1);
    l.push_back(2);
    l.push_front(4);
    for(int i:l)
    {
        cout<<"traversing of list ->"<<i<<endl;
    }
    l.erase(l.begin());
    for(int i:l)
    {
        cout<<"traversing of list after erasing ->"<<i<<endl;
    }
     l.push_back(2);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    for(int i:l)
    {
        cout<<"traversing of list after erasing ->"<<i<<endl;
    }
    l.pop_back();
    for(int i:l)
    {
        cout<<"traversing of list after erasing ->"<<i<<endl;
    }
    l.pop_front();
     for(int i:l)
    {
        cout<<"traversing of list after erasing ->"<<i<<endl;
    }
    cout<<"size of list ->"<<l.size()<<endl;

    return 0;
}
