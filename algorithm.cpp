#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    cout<<"finding 6 ->"<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound ->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound ->"<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    int a=2;
    int b=5;
    cout<<"max ->"<<max(a,b)<<endl;
     cout<<"min ->"<<min(a,b)<<endl;
     swap(a,b);
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;

     string s="mayuri";
     reverse(s.begin(),s.end());
     cout<<s<<endl;

     rotate(v.begin(),v.begin()+1,v.end());
     cout<<"after rotate ->"<<endl;
     for(int i:v)
     {
         cout<<i<<endl;
     }
     sort(v.begin(),v.end());
     cout<<"after sort ->"<<endl;
     for(int i:v)
     {
         cout<<i<<endl;
     }
    return 0;
}
