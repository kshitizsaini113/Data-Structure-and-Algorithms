#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n1, n2;
    char op;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Enter operator: ";
    cin >> op;

    switch( op )
    {
        case '+':
            cout << n1 + n2 << endl;
            break;
        case '-':
            cout << n1 - n2 << endl;
            break;
        case '*':
            cout << n1 * n2 << endl;
            break;
        case '/':
            cout << n1 / n2 << endl;
            break;
        default:
            cout << "Operator not supported." <<endl;
            break;
    }

    return 0;
}