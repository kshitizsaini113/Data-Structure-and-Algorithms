#include <stdio.h>

void tower_of_hanoi(int n, int A,int B, int C)
{
  if (n>0)
  {
    tower_of_hanoi(n-1,A,C,B);
    printf("Move disk from tower %d to tower %d\n",A,C);
    tower_of_hanoi(n-1,B,A,C);
  }
}

int main()
{
  tower_of_hanoi(3,1,2,3);
  printf("\n\nTower of Hanoi problem is solved for the given expression.\n");
  return 0;
}
