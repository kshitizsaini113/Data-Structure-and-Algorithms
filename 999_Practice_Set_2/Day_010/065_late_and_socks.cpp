// Diksha is getting late for college. She is looking for a matching pair of socks from a box full 
// of socks. In the worst-case scenario, how many socks should Diksha remove from her drawer until 
// she finds a matching pair.
// 
// Input format
// The first line contains the number of test cases T. Next T lines contain an integer N which 
// indicates the total pairs of socks present in the drawer.
//  
// Output format
// Print the number of draws Diksha will have to make in the worst case.

#include <iostream>

using namespace std;

int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;

    for(int i=0; i<numberOfTestCases; i++)
    {
        int numberOfSocks;
        cin >> numberOfSocks;

        cout << numberOfSocks + 1 <<endl;
    }

    return 0;
}