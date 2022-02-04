1. What does a derived class inherit from a base class?
   It inherits all members and member function of a base class.

2. What doesn't a derived class inherit from a base class?
   It does not inherit the construtors, destructors and the copy assignment operator.
   The friends are not inherited either because they are not member function.

3. Suppose the return type of the baseDMA::operator=() function were defined as void insted of baseDMA &. What effect, if any, would that have? What if the return type were baseDMA insted of baseDMA &?
   If the return type were void, you would still be able to use single assignment but not chain assignment:
   ```c
   baseDMA magazine("Pandering to Glitz", 1);
   baseDMA gift1, gift2, gift3;
   gift1 = magazine; // ok
   gift2 = gift3 = gift1; // no longer valid
   ```
   If the method returned an object instead of a reference, the method execution would be slowed a bit because the
   return statement would involve copying the object.

4. In what order are class constructor and class destructor called when a derived-class object is created and deleted?
   When the derived object is created, the base class constructor is called first and after that derived class constructor is called. The opposite applies to destructors: first the derived class destructor is called and then the base class destructor.

5. If a derived class doesn't add any data members to the base class, does the derived class require constructors?
   Yes, every class requires its own constructors. If the derived class add no new members, the constructor can have an empty body, but it must exist.

6. Suppose a base class and a derived class both define a method with the same name and a derived-class object invokes
the method. What method is called?
   The derived-class method is invoked, because the object is a derived-class object.

7. When should a derived class define an assignment operator?
   The derived class should define an assignment operator if the derived-class constructor use the new or new [] operator
   to initialize pointers that are members of that class. More generally, the derived class should define an assignment
   operator if the default assignment is incorret for derived-class members.

8. Can you assign the address of an object of a derived class to an object of the base class?
Yes, you can assign the address of an object of a derived class to a pointer to the base class. You can assign the
address of a base-class object to a pointer to a derived class (downcasting) only by making an explicit type cast, and it is not necessarily safe to use such a pointer.

9. Can you assign an object of a derived class to an object of the base class? Can you assign an object of a base class
to an object of the derived class?
   Yes, the base assignment operator only deals with base class members, and the derived class members are ignored in the assignment. You can assign an object of a base class to an object of the derived class provided that the derived-class has a conversion constructor or a assignment operator for assigning a base class to a derived class.

10. Because of the is-a relationship. The derived class object is a base class object. C++ allows a reference to a base type to refer to any type derived from that base.

11. Suppose you define a function that takes a base-class object as an argument (that is, the function passes a base-class object by value). Why can this function also use a derived-class object as an argument?
   The function will use the base class copy constructor to copy all members from the derived class that are base class members.
   Passing an object by value invokes the copy constructor. Because the form argument is a base-class object, the base-class copy constructor is invoked. The copy constructor has as its argument a reference to the base class, and this reference can refer to the derived object passed as an argument. The net result is that a new base-class object whose members correspond to the base class portion of the derived object is produced.

12. Why is it usually better to pass object by reference than by value?
   One reason for this is efficiency. Passing an object by value involves generating a temporary copy, which means calling the copy constructor and then later calling the constructor. Calling these function take time, and copying a large object can be quite a bit slower than passing a reference. If the function doesn't modify the object, you should declare the argument as a const reference.
   Another reason for passing objects by reference is that, in the case of inheritance using virtual functions, a function defined as accepting a base-class reference argument can also be used succesfully with derived classes.

13. Suppose Corporation is a base class and PublicCorporation is a derived class. Also suppose that each class defines a head() member function, that ph is a pointer to the Corporation type, and that ph is assigned the address of a PublicCorporation object. How is ph->head() interpreted if the base class defines head() as

a. Regular nonvirtual method

   ph->head() will execute the head() member from the Corporation class, because the compiler will use static binding for non-virtual methods.

b. Virtual method

   ph->head() will execute the head() member from the PublicCorporation class, because the compiler will use dynamic binding for virtual methods.

14. The first thing is that the derived class do not pass in the is-a method relationship. The second thing is that the definition of area method in the derived class hides the base class definition of area. 
