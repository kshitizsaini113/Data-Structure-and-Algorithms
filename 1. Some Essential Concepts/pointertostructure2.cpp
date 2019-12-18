#include <iostream>
#include <stdlib.h>

using namespace std;

struct rectangle
{
  int length;
  int bredth;
};

int main()
{
  struct rectangle *p;
  p=(struct rectangle*)malloc(sizeof(struct rectangle));
  p->length=10;
  p->bredth=5;
  cout<<p->length;
  return 0;
}
