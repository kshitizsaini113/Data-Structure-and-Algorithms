# Recursion

If a function is calling itself then it is a recursive function. Recursion has a base condition that dominates recursion.

Recursive function are traced in form of a tree.

```
void fun(int n)
{
  if(n>0)
  {
    printf("%d",n);
    fun(n-1);
    //Function calling itself
   }
}

void main()
{
  int x=3;
  fun(x);
}
```

Function part after calling will be executed after all the calling have been made.

## Tail Recursion

If a recursive function is calling itself and the recursive call is the last statement in a function then it is called **Tail Recursion.**

```
void fun1(int n)
{
  if(n>0)
  {
    printf("%d ",n);
    fun1(n-1);
  }
}
```
