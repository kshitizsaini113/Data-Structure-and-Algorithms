// Program for converting decimal to hexadecimal

#include <iostream>

using namespace std;

string toHexadecimal(int n)
{
    string ans="";
    int x=1;

    while(x<=n)
    {
        x *= 16;
    }
    x/=16;

    while(x>0)
    {
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=16;
        
        if(lastDigit<=9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = lastDigit + 'A' - 10;
            ans.push_back(c);
        }
        
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<toHexadecimal(n);
    
    return 0;
}