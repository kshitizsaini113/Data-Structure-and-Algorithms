#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int side1, side2, side3;

    cout << "Enter three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    if ( side1 == side2 && side2 == side3 )
    {
        cout << "Equiletral" << endl;
    }
    else if ( side1 == side2 || side2 == side3 || side3 == side1 )
    {
        cout << "Isosceles" << endl;
    }
    else
    {
        cout << "Scalene" << endl;
    }

    return 0;
}