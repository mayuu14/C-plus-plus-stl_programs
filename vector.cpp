#include<iostream>
#include<vector> //dynamic array grows and shrinks as the element is added or removed
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v1(5,1);//initialize a vector of size 5 and initialize with 1
    vector<int> v2(v1);//copies the vector v1 into vector v2
    cout<<"default capacity of vector ->"<<v.capacity()<<endl; //default capacity is 0
    cout<<"default size of vector ->"<<v.size()<<endl;//default size is 0
    v.push_back(1);
    cout<<"capacity after pushing element in vector->"<<v.capacity()<<endl;
    cout<<"size after pushing element in vector->"<<v.size()<<endl;
    v.push_back(2);
    cout<<"capacity after pushing element in vector->"<<v.capacity()<<endl;
    cout<<"size after pushing element in vector->"<<v.size()<<endl;
    v.push_back(3);
    cout<<"capacity after pushing element in vector->"<<v.capacity()<<endl; //capacity doubles when we add element in vector while vector is already full
    cout<<"size after pushing element in vector->"<<v.size()<<endl;
    //capacity shows the place/capacity to hold elements
    //size shows the elements size the vector shows

    cout<<"element at second position ->"<<v.at(2)<<endl;
    cout<<"first element of vector ->"<<v.front()<<endl;//complexity=0(1)
    cout<<"last element of vector ->"<<v.back()<<endl;
    cout<<"empty or not ->"<<v.empty()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"traversing using for loop ->"<<v[i];
        cout<<endl;
    }

    for(int i:v)
    {
        cout<<"traversing using for each loop before pop ->"<<i;
        cout<<endl;
    }

    v.pop_back();//removes the last element of vector
    for(int i:v)
    {
        cout<<"traversing using for each loop after pop ->"<<i;
        cout<<endl;
    }
    cout<<"capacity and size of vector before clear operation ->"<<v.capacity()<<"&"<<v.size()<<endl;
    v.clear();
    cout<<"capacity and size of vector after clear operation ->"<<v.capacity()<<"&"<<v.size()<<endl;
    //note after clear operation the capacity of vector remains as it is only the size will change
    return 0;
}
