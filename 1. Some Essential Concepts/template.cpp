#include <iostream>

using namespace std;

template <class T>
class arithmetic
{
private:
  T a;
  T b;

public:
  arithmetic(T a, T b);
  T add();
  T sub();
};

template <class T>
arithmetic<T>::arithmetic(T a, T b)
{
  this->a=a;
  this->b=b;
}

template <class T>
T arithmetic<T>::add()
{
  T c;
  c=a+b;
  return c;
}

template <class T>
T arithmetic<T>::sub()
{
  T c;
  c=a-b;
  return c;
}

int main()
{
  arithmetic<int> a1(10,5);
  cout<<a1.add()<<endl<<a1.sub()<<endl;

  arithmetic<float> a2(10.77,5.33);
  cout<<a2.add()<<endl<<a2.sub()<<endl;
  return 0;
}
