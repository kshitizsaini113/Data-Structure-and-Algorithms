/* A simple program to print subarray
with sum as given sum */
#include <bits/stdc++.h>
using namespace std;

/* Returns true if the there is a subarray
of arr[] with sum equal to 'sum' otherwise
returns false. Also, prints the result */
void subArraySum(int arr[], int n, int sum)
{

	// Pick a starting point
	for (int i = 0; i < n; i++) {
		int currentSum = arr[i];

		if (currentSum == sum) {
			cout << "Sum found at indexes " << i << endl;
			return;
		}
		else {
			// Try all subarrays starting with 'i'
			for (int j = i + 1; j < n; j++) {
				currentSum += arr[j];

				if (currentSum == sum) {
					cout << "Sum found between indexes "
						<< i << " and " << j << endl;
					return;
				}
			}
		}
	}
	cout << "No subarray found";
	return;
}

// Driver Code
int main()
{
	int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr, n, sum);
	return 0;
}

// This code is contributed
// by rathbhupendra
