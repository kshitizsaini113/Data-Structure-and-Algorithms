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
            array[0] = 0;
            array[1] = 1;
            array[2] = 2;
            array[3] = 3;
            array[4] = 4;
            array[5] = 5;
            array[6] = 6;
            array[7] = 7;
            array[8] = 8;
            array[9] = 9;
            array[10] = 10;
            array[11] = 11;
            array[12] = 12;
        }
        Array(int size)
        {
            this->size = size;
            length = 0;
            array = new int[size];
        }
        
        void displayAllElements();
};

void Array::displayAllElements()
{
    if(length == 0)
    {
        cout<<"No elements in array."<<endl;
    }
    else
    {
        cout<<"Elements of array are : ";
        for(int i=0; i<length; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
        
    return;
}

int main()
{
    Array *arr;

    arr = new Array;

    arr->displayAllElements();

    return 0;
}