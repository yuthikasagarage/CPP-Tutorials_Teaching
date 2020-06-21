//static data member tracking the number of objects of a class.
   #include <iostream>
   using std::cout;
   using std::endl;

   #include "employee.h" // Employee class definition

   int main()
   {
     // use class name and binary scope resolution operator to
     // access static number function getCount
      cout << "Number of employees before instantiation of any objects is "
         << Employee::getCount() << endl; // use class name

     // use new to dynamically create two new Employees
      // operator new also calls the object's constructor


// "yuthika" this is a pointer of type character in cstring format

      Employee *e1Ptr = new Employee( "Susan", "Baker" ); // new keyword returns a pointer of type Employee here
      Employee *e2Ptr = new Employee( "Robert", "Jones" );

      Employee xy("yuthika ", "hasara"); // usual static way of creating objects

	//	xy = *e1Ptr ; // this is now copy constructor lol

      // call getCount on first Employee object
      cout << "Number of employees after objects are instantiated is "
        << e1Ptr->getCount();

      cout << "\n\nEmployee 1: "
         << e1Ptr->getFirstName() << " " << e1Ptr->getLastName()
         << "\nEmployee 2: "
         << e2Ptr->getFirstName() << " " << e2Ptr->getLastName() << "\n\n";

      delete e1Ptr; // deallocate memory, calls the destructor and removes the dynamic memeory

     e1Ptr = nullptr; // disconnect pointer from free-store space

      delete e2Ptr; // deallocate memory

      e2Ptr = nullptr; // disconnect pointer from free-store space

     // no objects exist, so call static member function getCount again
      // using the class name and the binary scope resolution operator
      cout << "Number of employees after objects are deleted is "
         << Employee::getCount() << endl;
     return 0;
   } // end main