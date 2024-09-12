# exp14
# Experiment 14
# Aim
To study and implement Inheritance

# Apparatus
Vs Code

# Theory
## C++ Inheritance: Overview and Types

Inheritance is a core concept in object-oriented programming (OOP) that allows one class to acquire the properties and behaviors of another class. This promotes code reusability, extendability, and hierarchical classification.

## Types of Inheritance

- **Single Inheritance**:
  - A derived class inherits from a single base class.

- **Multiple Inheritance**:
  - A derived class inherits from more than one base class.

- **Multilevel Inheritance**:
  - A class is derived from another derived class, forming a multi-level hierarchy.

- **Hierarchical Inheritance**:
  - Multiple derived classes inherit from a single base class.

- **Hybrid Inheritance**:
  - A combination of multiple inheritance and multilevel inheritance.

## Access Specifiers in Inheritance

The access specifier used during inheritance determines the accessibility of base class members in the derived class. Here’s a breakdown:

| Access Specifier | Base Class Public Members | Base Class Protected Members | Base Class Private Members |
|------------------|----------------------------|------------------------------|----------------------------|
| **Public**       | Public in Derived Class     | Protected in Derived Class   | Not Directly Accessible    |
| **Protected**    | Protected in Derived Class | Protected in Derived Class   | Not Directly Accessible    |
| **Private**      | Not Accessible             | Not Accessible                | Not Accessible             |

### Key Points

- **Public Inheritance**:
  - Public members of the base class remain public in the derived class.
  - Protected members remain protected.
  - Private members are not directly accessible but can be accessed via public/protected methods.

- **Protected Inheritance**:
  - Public and protected members of the base class become protected in the derived class.

- **Private Inheritance**:
  - Public and protected members of the base class become private in the derived class.

## Abstract Classes

- **Abstract Class**:
  - A class containing at least one pure virtual function (e.g., `virtual void func() = 0;`).
  - Cannot be instantiated directly.
  - Designed to be inherited by other classes.

## Benefits of Inheritance

- **Code Reusability**: Allows reuse of existing code.
- **Extendability**: Facilitates the addition of new features with minimal changes.
- **Polymorphism**: Supports the creation of more flexible and extensible systems by allowing derived classes to override base class methods.
.

# codes

single inheritance
~~~
#include <iostream>
#include <string>
using namespace std;


class uni
{
    public:
    string uni = "symbiosis: ";
    void discipline()
    {
        cout<<"engineering "<<endl;
    }
};

class dep: public uni
{
    public:
    string dept="electronics and telecommunication ";
};

int main()
{
    dep u1;
    u1.discipline();
    cout<<u1.uni+" "+u1.dept;
}
~~~
```
/tmp/LbQueTWHLb.o
engineering
symbiosis:  electronics and telecommunication

=== Code Execution Successful ===
```

multiple inheritance
~~~
#include <iostream>
#include <string>
using namespace std;

//parent class 1
class vehicle
{
    public:
    string company = "food";
    void type()
    {
        cout<<"mustang"<<endl;
    }
};

//parent class 2
class specs
{
    public:
    string mileage = "8 kmpl";
    void colour()
    {
        cout<<"white"<<endl;
    }
};
//child class 1
class car: public vehicle,public specs
{
    public:
    string seater = "4 seater";
};

int main()
{
    car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE: "<<f2.mileage<<endl;
}
~~~
```
/tmp/DGZYnVTYlm.o
black
ford ecosport
(6 seater)
MILEAGE: 6 kmpl
```


multilevel inheritance
~~~
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
    void fuel()
    {
        cout << "This vehicle runs on fuel." << endl;
    }
};

// subclass of vehicle
class Car : public Vehicle {
    public:
    void doors() {
        cout << "This car has 4 doors." << endl;
    }
};

// subclass of car
class SportsCar : public Car {
    public:
    void maxSpeed() {
        cout << "speed: 200 mph." << endl;
    }
};

int main() {
    SportsCar myCar;
    myCar.fuel();
    myCar.doors();
    myCar.maxSpeed();

    return 0;
}
~~~
```
/tmp/2FEWBsZPhg.o
This vehicle runs on petrol.
This car has 5 doors.
speed: 200 kmph.
```

inheritance
~~~

#include <iostream>
#include <string>
using namespace std;

//base class
class Vehicle {
    public:
    void fuel()
    {
        cout << "This vehicle runs on fuel." << endl;
    }
};

//subclass 1
class Car : public Vehicle {
    public:
    void doors() {
        cout << "This car has 4 doors." << endl;
    }
};

//subclass 2
class scooty : public Vehicle {
    public:
    void tyres() {
        cout << "it has 2 tyres." << endl;
    }
};

int main()
{
    Car car;
    scooty scooty;
    car.fuel();
    car.doors();
    scooty.fuel();
    scooty.tyres();
    return 0;
}
~~~
```
/tmp/fTXN1sMpuE.o
This vehicle runs on petrol.
This car has 5 doors.
This vehicle runs on petrol.
it has 2 tyres.
```
