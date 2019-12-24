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

> Converting to loop
```
void fun1(int n)
{
  while(n>0)
  {
    printf("%d ",n);
    n--;
  }
}
```

In case of tail recursion, ***loops*** are more efficient as their space complexity is less. Here, in the given case the complexity of tail recursion is O(n) while that of loop is O(1), as recursive function creates seperate memory stack for each time.

## Head Recursion

If a recursive function is calling itself and the recursive call is the first statement in a function then it is called **Head Recursion.** There is no operation before the function call.(i.e *there is no precessing at the time of calling but only at the time of returning*)

```
void fun2(int n)
{
  if(n>0)
  {
    fun2(n-1);
    printf("%d ",n);
  }
}
```

> Converting to loop
```
void fun2(int n)
{
int i=1;
  while(i<=n)
  {
    printf("%d ",i);
    i++;
  }
}
```

In case of head recursion, ***loops*** are not easy to be converted to, but head recursion *can be converted* to loops.
