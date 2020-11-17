// The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock 
// so that in between those days your profit is maximum.

#include <bits/stdc++.h>

using namespace std;

void stockBuySell(int arr[], int n)
{
	if (n == 1)
    {
		return;
    }

	int i = 0;
	while (i < n - 1) 
    {
		while ((i < n - 1) && (arr[i + 1] <= arr[i]))
        {
			i++;
        }
        
		if (i == n - 1)
        {
			break;
        }
        
		int buy = i++;
        
		while ((i < n) && (arr[i] >= arr[i - 1]))
        {
			i++;
        }
        
		int sell = i - 1;

		cout << "Buy on: "<<buy<<"\t Sell on: "<<sell<<endl;
	}
}

int main()
{
	int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

	stockBuySell(arr, n);

	return 0;
}