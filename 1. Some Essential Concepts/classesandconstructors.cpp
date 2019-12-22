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

int main()
{
  return 0;
}
