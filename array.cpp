#include<iostream>
#include<array>         //stl array
using namespace std;
int main()
{
    int basic[3]={1,2,3},i;  //static array

    for(i=0;i<3;i++)
    {
         cout<<basic[i];
         cout<<endl;
    }

    array<int,4> a={11,22,33,44};  //static arrays
    int size=a.size();
    cout<<size<<endl;

    for(int j=0;j<size;j++)
    {
        cout<<a[j];
        cout<<endl;
    }
    cout<<"element at second index -> "<<a.at(2)<<endl;//complexity=0(1)
    cout<<"empty or not ->"<<a.empty()<<endl;//returns boolean value 0 means no 1 means yes complexity=0(1)
    cout<<"first element of array ->"<<a.front()<<endl;//complexity=0(1)
    cout<<"last element of array ->"<<a.back()<<endl;//complexity=0(1)
    return 0;
}
