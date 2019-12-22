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
    rectangle(int l, int b);
    int area();
};

int main()
{
  return 0;
}
