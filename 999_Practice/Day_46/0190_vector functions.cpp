#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);

    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back();
    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    vector<int> v2 (3,50);
    for(auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    swap(v, v2);
    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    sort(v2.begin(), v2.end());
    for(auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;
}