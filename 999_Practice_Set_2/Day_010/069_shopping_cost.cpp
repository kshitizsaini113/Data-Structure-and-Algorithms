// Tina is preparing a shopping list containing N items. She knows the quantity and price of each 
// item on the list. The shop is offering a 20% discount on the items with a quantity of more than 
// 100 units. Given the quantity and price of each of the N items, your task is to calculate how 
// much each item will cost.

// Input format
// The first line of the input contains an integer N denoting the number of itemsEach of the next N 
// lines contains two space-separated integers denoting the quantity and price of the item.

// Output format
// Print the final cost that Tina has to bear for each item. Print till a single digit after the 
// decimal point.

#include <iostream>
#include <iomanip>

using namespace std;

double cost(double quantity, double price)
{
    double totalCost = quantity * price;
    
    if(quantity > 100)
    {
        totalCost *= 0.8;
    }

    return totalCost;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for(int i=0; i<numberOfTestCases; i++)
    {
        double quantity, price;
        cin>>quantity>>price;

        cout << setprecision(1) << fixed << cost(quantity, price);

        cout<<endl;
    }
}   