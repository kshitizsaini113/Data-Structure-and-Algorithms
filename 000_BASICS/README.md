# Data Structures and Algorithm

* **Data** is the integral part of core applications or programs.

* **Program** is a set of instructions performing operations on data to get some results.

* **Data Structures...?**

    Arrangement of collection of data items so that they can be utilised efficiently. *i.e. Operation on data can be done efficiently.* 

    **Where is the data arranged and when?**

    The data is arranged inside the memory during the execution of a program.

*Program as well as data needs to be brought under memory for it's execution.*

Data Structure organises how data is stored into Main Memory so that program can access it. 

*When progrm runs, it needs data, so data-structure is kind of running program.* 

Without Data Structures, we can't develop application.

* **DataBases :** When data is large in size, and is relational, stored in tables. Data stored in table in HardDisk is known as DataBase.

* **Data Mining Algorithms :** Algorithms for analysing data stored in Data Warehouses.

* **Data Warehouse :** Huge size data which is inactive for now & can be utilised whenever required.

* **Big Data :** Storing and utilising large size data generated on daily basis.

Main Memory is devided into three sections and used by programs.

-----
3. Stack
-----
2. Heap
-----
1. Code Section
-----

Program from Hard Disk must be brought to main memory in code section.



* **Stack Frame :** Block of memory which belong to a particular function is called it's Stack Frame *(Also known as Activation Record)*

* **Static Memory Allocation :** Size of memory to be assigned gets decided at compile time. Memory is allocated when program start executing. *Bytes of memory required gets decided at compile time.*

* **Heap :** Unorganized memory, treated as resource. Program can't directly access heap memory. Heap memory is accessed via pointers. *Memory for pointer is allocated in Stack.* Heap memory must be explicitly requested & explicitly released.

* **Memory Leak :** If we don't release a memory, then the memory will still belong to our program and can't be used again causing loss of memory. This loss of memory is termed as *Memory Leak.*

> We should release the Heap memory if we don't need it.

## Physical Data Structures v/s Logical Data Structures

1. **Physical Data Structures**

    These data structure decides/defines how the memory is organized or how the memory is allocated.

    *e.g. : Array, Linkedlist*

2. **Logical Data Structures**

    While physical data structures are meant for holding/storing the data. Discipline like insertion/deletion are defined via Logical Data Structures.

    *e.g. : Stack, Queues, Trees, Graphs, Hash Table*

    Stack, Queue -> Linear

    Tree, Graph -> Non-Linear

    Hash Table -> Tabular

Logical Data Structures are implemented using Physical Data Structures.

## Abstract Data Types (ADT)

Data Type defines : 
1. Representation of Data
2. Operation on Data

Considering Integer, one bit is reserved for the sign & the remaining bits are used to store the numbers. Arithmetic as well as relational opertions are allowed on Integer Data.