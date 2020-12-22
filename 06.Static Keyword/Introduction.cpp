/*
    # static is a keyword or modifier that belongs to the type not instance.
    # So instance is not required to access the static members.
    # In C++, static can be field, method, constructor, class, properties, operator and event.

    Advantage of C++ static keyword
    _______________________________

    Memory efficient: Now we don't need to create instance for accessing the static members, so it saves memory. 
    ------------------Moreover, it belongs to the type, so it will not get memory each time when instance is created.

    C++ Static Field----
    -----------------
    A field which is declared as static is called static field. 
    Unlike instance field which gets memory each time whenever you create object, there is only one copy of static field created in the memory.
    It is shared to all the objects.

    It is used to refer the common property of all objects such as rateOfInterest in case of Account, companyName in case of Employee etc.

*/