/*
    A virtual function is a memeber function which is defined in Base class and redifened in the derived class.
    It is declared using the virtual keyword.

    there is a necessity to use a single pointer to refer to all the objects of the different class;
    So we create a pointer to base classs which points to all the derived objects

    when a function is made virtual compiler gets to know at run time which function has to be compiled at run time based on the 
    type of the object pointed by the base class pointer

    * Late Binding or Dynamic Binding
       In late binding compiler identify the type of object at run time and then Binds the function call at run time

    * Rules of Virtual Function
       #    Virtual Function must be member of some class.
       #    Virtual Function can not be STATIC MEMBERS.
       #    They are accessed through Object pointer 
       #    Virtual Function must be declared in Base Class only, Whether to be used or not
       #    It can be friend of another class
       #    We can not have Virtual Constructor but Virtual Destructor is possible
       #    Virtual Function prototype should be same as in base class  
            If two function has same name but different prototype  it is considered as Function Overloading






*/
