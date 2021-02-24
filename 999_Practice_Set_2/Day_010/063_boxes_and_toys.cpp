// Tina and Rahul have 1 toy each. They are entering into an amusement park but it is not allowed to 
// take the toys inside, so they have to keep it in the boxes provided by the park management. They want
// to keep the toys together in one box. There are N boxes in total, at this moment there are ti toys 
// present in i-th box and the maximum capacity of the box is denoted by ci. Rahul and Tina want to 
// know in how many boxes can they keep their toys such that both the toys are in the same box.
// 
// 
// Input Format
// The first line of the input contains integer N, denoting the count of boxes. Each of the next N lines 
// contains two integers ti and ci denoting the number of toys present in the i-th box and the maximum 
// capacity of that box.
// 
// Output Format
// Print the maximum number of boxes that fulfill the conditions.

#include <bits/stdc++.h>

using namespace std;

bool canHold(int present, int capacity)
{
  if( capacity - present >= 2 )
  {
    return true;
  }
  return false;
}

int main()
{
  int numberOfTestCases;
  cin >> numberOfTestCases;
  
  int count = 0;
  
  for(int i = 0; i < numberOfTestCases; i++)
  {
    int present;
    int capacity;
    cin >> present >> capacity;
    
    if(canHold(present, capacity))
    {
      count++;
    }
  }
  
  cout << count <<endl;
  
  return 0;
}