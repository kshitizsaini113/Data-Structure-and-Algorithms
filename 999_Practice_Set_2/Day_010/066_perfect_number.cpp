// Have you heard of Perfect numbers? If not let me tell you what is it, Perfect Numbers are integers 
// that are equal to the sum of all its divisors except that number itself. Now, given an integer N
// ,write a program to print true if it is a perfect number or false if it is not a perfect number.

// Input format
// The first line contains the number of test cases T. Each test case contains an integer N is provided.

// Output format
// For each test case on a new line, print true or false depending on N.

#include <iostream>

using namespace std;

bool checkPerfect(int num)
{
    int divSum = 0;
    for(int i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            divSum += i;
        }
    }
    if(divSum == num)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        if(checkPerfect(num))
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    }

    return 0;
}