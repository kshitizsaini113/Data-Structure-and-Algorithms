#include <iostream>

using namespace std;

class rectangle
{
  private:
    int length;
    int bredth;

  public:

    rectangle()
    {
      length=bredth=1;
    }
    //Constructor

    rectangle(int l, int b); //Parametrised constructors
    int area();
    int perimeter();

    int getlength()
    {
      return length;
    }

    void setlength(int l)
    {
      length=l;
    }

    ~rectangle(); //Destructor
};

rectangle::rectangle(int l, int b)
{
  length=l;
  bredth=b;
}

int rectangle::area()
{
  return length*bredth;
}

int rectangle::perimeter()
{
  return 2*(length+bredth);
}

rectangle::~rectangle()
{}

int main()
{
  rectangle r(10,5);
  cout<<r.area()<<endl;
  cout<<r.perimeter()<<endl;
  r.setlength(20);
  cout<<r.getlength()<<endl;
  return 0;
}
