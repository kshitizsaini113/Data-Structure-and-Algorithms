# Recursion

**Recursive Function :** Function which is calling itself, then it is termed as a recursive function. There must be some base condition that will terminate recursion.

```
returnType function (parameters) {
    ...
    if (baseCondition) {
        ...  -> Ascendig Phase
        function();
        ...  -> Descending Phase
    }
}
```

* Recursive functions are traced in form of a tree.
* Recursive Functions are like rubber-bands, if we strech a rubber band, on releasing, it will come back.

*Stack is utilised in Recursion.*

```
T(n) = 1           if n=0
       T(n-1)+1    if n>0

Time Complexity?

T(n) = T(n-1) + 1
     = T(n-2) + 1 + 1
     = T(n-3) + 1 + 1 + 1
     = T(n-k) + k
                            Assuming n-k = 0
                                     k = n
     = T(n-n) + n
     = T(0) + n
     = 1 + n

So, the time complexity will be O(n).
```

### Static Variables in Recursion
Static variables are allocated memory for once only so the same value is achieved after the calling is complete.

### Global Variables in Recursion
Global variables and Static Variables behave similarly in Recursion.

## Types of Recursion

1. **Tail Recursion**
    * If a recursice function is calling itself and that recursive call is the last statement of a function then it is *tail recursion.*
    * It means that all the operations will be performed at calling time only. No operation at returning time.

*Loop v/s Tail Recursion*
* Tail recursion can be easily converted to a loop.

**Tail Recursion**
```
void fun(int n) {
    if(n>0) {
        printf("%d", n);
        fun(n-1);
    }
}
```
Time Complexity: O(n)

Space Complexity: O(n)

**Loop**
```
void fun(int n) {
    while(n>0) {
        printf("%d", n);
        n--;
    }
}
```
Time Complexity: O(n)

Space Complexity: O(1)


*It is better to convert tail recursion to a loop, as loop is efficient in terms of space. Even some of the smart compilers convert the tail recursion to loop themself.*

2. **Head Recursion**
    * If a recursive function is calling itself and first statement inside is a recursive call and the processing is being done afterwards.
    * It means that function doesn't have to perform any operation at the calling time. It has to do everything at returning time.

*Loops v/s Head Recursion*
* Head recursion can't be easily converted to a loop.

**Head Recursion**
```
void fun(int n) {
    if(n>0) {
        fun(n-1);
        printf("%d", n);
    }
}
```
**Loop**
```
void fun(int n) {
    int i = 1;
    while(i<=n) {
        printf("%d", i);
        i++;
    }
}
```

> If a recursive function is calling itself only one time, then it is a *linear recursive function.*

3. **Tree Recursion**
    * If a recursive function is calling itself more than one time, then it is a *Tree recursion.*
