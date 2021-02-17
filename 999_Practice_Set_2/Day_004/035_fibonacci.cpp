#include <iostream>

using namespace std;

int main()
{
    int n1=0;
    int n2=1;

    int n;
    cin>>n;

    cout<<n1<<" "<<n2<<" ";

    for(int i=1; i<n-1; i++)
    {
        int temp = n1;
        n1 = n2;
        n2 = n2 + temp;

        cout<<n2<<" ";
    }
    cout<<endl;

    return 0;
}