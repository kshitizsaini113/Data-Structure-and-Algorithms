#include <iostream>

using namespace std;

int memory[1000];

int mem_fibonacci(int n)
{
    if(n<=1)
    {
        memory[n] = n;
        return n;
    }
    else
    {
        if(memory[n-2] == -1)
        {
            memory[n-2] = mem_fibonacci(n-2);
        }
        if(memory[n-1] == -1)
        {
            memory[n-1] = mem_fibonacci(n-1);
        }
        memory[n] = memory[n-2] + memory[n-1];
        return memory[n];
    }
}

int main()
{
    for(int i=0; i<=1000; i++)
    {
        memory[i] = -1;
    }

    cout<<mem_fibonacci(999);

    return 0;
}