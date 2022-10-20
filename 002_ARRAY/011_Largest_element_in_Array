#include<iostream>
using namespace std;
 void kLargest(int nums[], int n, int k)
{
   sort(nums, nums+n, greater<int>());
    cout << "\nLargest " << k << " Elements: ";
    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";
}
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    int k = 4;
    kLargest(nums, n, k);
}
