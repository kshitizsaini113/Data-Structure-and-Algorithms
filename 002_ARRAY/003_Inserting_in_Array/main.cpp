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
        void insertAllElements();
        void displayAllElements();
        void insertNElements(int n);
        void appendElement(int num);
        void insertAtIndex(int index, int num);
};

void Array::insertAllElements()
{
    length = 0;
    
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
        length++;
    }

    return;
}

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

void Array::insertNElements(int n)
{
    if(n > size-length)
    {
        cout<<"Elements more than space in array."<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cin>>array[length];
            length++;
        }
    }

    return;
}

void Array::appendElement(int num)
{
    if(length<size)
    {
        array[length] = num;
        length++;
    }
    else
    {
        cout<<"Array Full, no position to insert element into."<<endl;
    }
}

void Array::insertAtIndex(int index, int num)
{
    if(index>length || index<0)
    {
        cout<<"Index not present";
        return;
    }
    else if(length==size)
    {
        cout<<"Removig the element at index : "<<index<<endl;
        array[index] = num;
    }
    else
    {
        for(int i=length; i>index; i--)
        {
            array[i] = array[i-1];
        }
        array[index] = num;
        length++;
    }
}

int main()
{
    Array *arr;

    int size;
    cin>>size;

    arr = new Array(size);

    arr->displayAllElements();

    int n;
    cin>>n;
    arr->insertNElements(n);
    arr->displayAllElements();

    int num;
    cin>>n>>num;
    arr->insertAtIndex(n, num);
    arr->displayAllElements();

    cin>>n;
    arr->insertNElements(n);
    arr->displayAllElements();
    
    arr->insertAllElements();
    arr->displayAllElements();

    return 0;
}