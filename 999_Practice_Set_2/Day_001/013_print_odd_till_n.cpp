#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;

    cout << "Enter the number till you want to print odd numbers: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    cout<<endl;

    return 0;
}