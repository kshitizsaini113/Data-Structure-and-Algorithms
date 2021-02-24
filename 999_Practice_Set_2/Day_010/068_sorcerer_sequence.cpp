// Sorcerer Sequence is a series of integer numbers in which the first term starts with a positive 
// integer and the remaining terms are generated from the immediate previous term using the below 
// recurrence relation :
// 
// a-k+1 = (a)^1/2-k for even a-k
// a-k+1 = (a)^3/2-k for odd  a-k
// 
// Given a number N your task is to print the space-separated Sorcerer Sequence using this number 
// as the first term of the sequence.

#include <iostream>
#include <cmath>

using namespace std;

void printSorcererSequence(long long num)
{
    std::ios::sync_with_stdio(false);
    cout<<num<<" ";
    while(num != 1)
    {
        if(num%2==0)
        {
            num = pow(num, 0.5);
        }
        else
        {
            num = pow(num, 1.5);
        }
        cout<<num<<" ";
    }

    return;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for(int i=0; i<numberOfTestCases; i++)
    {
        long long num;
        cin >> num;

        printSorcererSequence(num);
        cout<<endl;
    }
}