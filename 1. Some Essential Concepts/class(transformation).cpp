#include <iostream>

using namespace std;

class rectangle
{
private:
  int length;
  int bredth;

public:
  void initialize(int l, int b)
  {
    length=l;
    bredth=b;
  }

  void changelength(int l)
  {
    length=l;
  }

  int area()
  {
    return length*bredth;
  }

};

int main()
{
  rectangle r;

  r.initialize(10,5);
  cout<<r.area();
  r.changelength(20);
  return 0;
}
