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
        void deleteAtIndex(int index);
        int linearSearch(int elemmnt);
        int improvedLinearSearch(int element);
        int binarySearch(int element);
        int getElement(int index);
        int maxElement();
        int minElement();
        int sumOfElements();
        int averageOfElements();
        void reverseArray();
        void leftShift();
        void leftRotate();
        void rightRotate();
        bool checkSorted();
        void insertInSorted(int element);
        void arrangingNegatives();
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

void Array::deleteAtIndex(int index)
{
    if(index>=length || index<0)
    {
        cout<<"No element at the specified index"<<endl;
    }
    else
    {
        for(int i=index; i<length-1; i++)
        {
            array[i] = array[i+1];
        }
        length--;
    }
}

int Array::linearSearch(int element)
{
    for(int i=0; i<length; i++)
    {
        if(element==array[i])
        {
            return i;
        }
    }
    return -1;
}

int Array::improvedLinearSearch(int element)
{
    for(int i=0; i<length; i++)
    {
        if(element==array[i])
        {
            swap(array[i], array[i-1]);
            return i-1;
        }
    }
    return -1;
}

int Array::binarySearch(int element)
{
    int left=0, right=length-1;
    int mid;

    while(left<=right)
    {
        mid = (left+right)/2;
        if(element==array[mid])
        {
            return mid;
        }
        else if(element<array[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}

int Array::getElement(int index)
{
    return array[index];
}

int Array::minElement()
{
    int min = array[0];

    for(int i=0; i<length; i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
    }

    return min;
}

int Array::maxElement()
{
    int max = array[0];

    for(int i=0; i<length; i++)
    {
        if(max<array[i])
        {
            max = array[i];
        }
    }

    return max;
}

int Array::sumOfElements()
{
    int sum = 0;

    for(int i=0; i<length; i++)
    {
        sum+=array[i];
    }

    return sum;
}

int Array::averageOfElements()
{
    return sumOfElements()/length;
}

void Array::reverseArray()
{
    int start;
    int end;

    for(start=0, end=length-1; start<end; start++, end--)
    {
        swap(array[start], array[end]);
    }
}

void Array::leftShift()
{
    for(int i=0; i<length-1; i++)
    {
        array[i] = array[i+1];
    }
    length--;
}

void Array::leftRotate()
{
    int temp = array[0];
    for(int i=0; i<length-1; i++)
    {
        array[i] = array[i+1];
    }
    array[length-1] = temp;
}

void Array::rightRotate()
{
    int temp = array[length-1];
    for(int i=length-1; i>0; i--)
    {
        array[i] = array[i-1];
    }
    array[0] = temp;
}

bool Array::checkSorted()
{
    for(int i=0; i<length-1; i++)
    {
        if(array[i] > array[i+1])
        {
            return false;
        }
    }
    return true;
}

void Array::insertInSorted(int element)
{
    int i=0;
    while (element>array[i])
    {
        i++;
    }
    insertAtIndex(i, element);
}

void Array::arrangingNegatives()
{
    int start = 0;
    int end = length - 1;
    while(start<end)
    {
        while(array[start]<0)
        {
            start++;
        }
        while(array[end]>=0)
        {
            end--;
        }
        if(start<end)
        {
            swap(array[start], array[end]);
        }
    }
}

int main()
{
    Array *arr;

    int size;
    cin>>size;

    arr = new Array(size);

    int n;
    cin>>n;
    arr->insertNElements(n);
    arr->displayAllElements();

    arr->insertInSorted(4);
    arr->displayAllElements();
    arr->insertInSorted(0);
    arr->displayAllElements();

    return 0;
}