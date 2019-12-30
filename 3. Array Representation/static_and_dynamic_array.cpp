#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  int *p;

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<endl<<endl;

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"   ";
  }
  //Stack Memory

  p=new int[5];
  //Memory in heap

  delete []p;

  return 0;
}
