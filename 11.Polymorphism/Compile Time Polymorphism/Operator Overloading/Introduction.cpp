/*
    Operator Overloading is a Compile time polymorphism.
    In this the operator is overloaded to provide the special meaning to the user defined data Type.
    Operator overloading is used to overload or redfines the operator available 

    * The advantage of Operator Overloading is to perform different operations on the same period
     
    * Operators Which can't be overloaded
        #   Scope Operator (::)
        #   Sizeof
        #   member Selector (.)
        #   member pointer Selector (*)
        #   ternary Operator (?:)

    * Syntax of Operator Overloading
       
       return_type class_name :: operator op(argument_list) {
           Body
       }

       Operator is Keyword 
       op is operator being overloaded

    * Rules for Overloading a Operator 
       #    Existing Operators can only be Overloaded , New can't.

       #    The overloaded operator contains atleast one operand of the user-defined data type

       #    We can't use friend function to overload certain operators.
            However the memeber function can be used to overload those operator.

       #    When Unary Operators are Overloaded 
            through Memeber Function then, no explicit argument but,
            through Friend Function then, one explicit argument 

            * Unary operator: are operators that act upon a single operand to produce a new value.

       #    When Binary Operator are Overloaded.
            through Member function then, one explicit argument but,
            through Friend Function then, two explicit argument

            * Binary Operators: Operators that operates or works with two operands are binary operators.


*/