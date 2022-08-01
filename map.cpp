#include<iostream>
#include<map> //Map is a data structure in which our data is stored in key-value format
                //one key point only one value
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="mayuri";
    m[2]="shete";
    m[13]="priyanka";
    m.insert({5,"ankita"});
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;//keys are printed in sorted order
    }
    cout<<"finding 13 ->"<<m.count(13)<<endl;
    cout<<"finding -13 ->"<<m.count(-13)<<endl;
    m.erase(13);//we have to give keys
    cout<<"after erase ->"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;//keys are printed in sorted order
    }
    auto it = m.find(5);//element 5 and elements after 5 are printed out
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }
    return 0;
}

