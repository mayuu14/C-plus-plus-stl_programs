#include<iostream>
#include<set> //It stores unique elements avoids duplicates
            //after adding the element we cannot modify the element
            //Returns element in sorted order
            //set is slower compare to unordered_set
            //unordered_set returns random elements
using namespace std;
int main()
{
    set<int> s;
    s.insert(12);
    s.insert(14);
    s.insert(13); //0(log n)
    s.insert(11);
    s.insert(99);
    s.insert(22);
    s.insert(10);
    s.insert(10);
    s.insert(10);

    for(int i:s)
    {
        cout<<"Elements of set ->"<<i<<endl;
    }
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<endl;
    for(int i:s)
    {
        cout<<"After erase Elements of set ->"<<i<<endl;
    }
    cout<<endl;
    cout<<"wheather the element is  prestent or not ??  ->"<<s.count(99)<<endl;

    set<int>::iterator itr=s.find(12); //it returns the reference of the element
    cout<<"Value present at itr 12->"<<*itr<<endl;

    for(auto i=itr;i != s.end();i++)
    {
        cout<<*i<<endl;
    }
    return 0;
}
