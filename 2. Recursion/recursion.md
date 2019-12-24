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

## Linear Recursion

If a recursive function is calling itself only one time then it is called **Linear Recursion.** Head as well as tail recursion are a part of linear recursion.

```
void fun(int n)
{
  if(n>0)
  {
    printf("%d ",n);
    fun(n-1);
    printf("%d ",n);
  }
}
```

## Tree Recursion

If a recursive function is calling itself more than one time then it is called **Tree Recursion.**

```
void fun(int n)
{
  if(n>0)
  {
    printf("%d ",n);
    fun(n-1);
    fun(n-1);
  }
}
```

On passing 3, we will first print value and make recursive call.

<div align="center">
  <img src="https://github.com/kshitizsaini113/Data-Structure-and-Algorithms/blob/master/2.%20Recursion/tree_recursion.PNG">
</div>

## Indirect Recursion

In indirect recursion, there are *more than one function* ***calling one another in a circular fashion.***

```
void funA(int n)
{
  if(n>0)
  {
    printf("%d",n);
    funB(n-1);
  }
}
void funB(int n)
{
  if(n>0)
  {
    printf("%d",n);
    funA(n/2);
  }
}
```

<div align="center">
  <img src="https://github.com/kshitizsaini113/Data-Structure-and-Algorithms/blob/master/2.%20Recursion/indirect_recursion.PNG">
</div>

## Nested Recursion

In a nested recursion recursive function will pass parameter as a recursive call. As parameter here is itself a recursive call, so unless the result of interior recursive call is obtained, exterior recursive call's result can't be obtained.

```
int fun(int n)
{
  if(n>100)
  {
    return n-10;
  }
  else
  {
    return fun(fun(n+1));
  }
}
```

<div align="center">
  <img src="https://github.com/kshitizsaini113/Data-Structure-and-Algorithms/blob/master/2.%20Recursion/nested_recursion.PNG">
</div>
