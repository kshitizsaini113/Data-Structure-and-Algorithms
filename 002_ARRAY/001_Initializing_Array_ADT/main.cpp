#include <iostream>

using namespace std;

class Array
{
    private:
        int *array;
        int size;
        int length;
    
    public:
        Array()
        {
            size = 13;
            length = 0;
            array = new int[size];
        }
        Array(int size)
        {
            this->size = size;
            length = 0;
            array = new int[size];
        }
};

int main()
{
    Array *arr1, *arr2;

    int size;
    cin>>size;

    arr1 = new Array(size);
    arr2 = new Array();

    return 0;
}