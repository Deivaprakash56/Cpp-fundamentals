## Introduction

The `Robot` class is a simple class designed to demonstrate how class constructors and methods work in C++. When an object of this class is created, some methods are automatically invoked through the constructor.

## Class Structure

The `Robot` class consists of the following:

1. **Constructor**:
*  Initializes the class and automatically calls two methods (`method1` and `method2`).
2. **Methods**:
* Can either be called automatically by the constructor or manually outside of it.
    - `method1`: Prints a message.
    - `method2`: Prints a message.
    - `method3`: Can be called directly by an object to print a message.

```cpp
class Robot {
    public:
        Robot();             // Constructor
        void method1();      // Method declaration
        void method2();      // Method declaration
};
```
## Constructor 

* A constructor in C++ is a special type of member function that is automatically called when an object of a class is created. It is primarily used to initialize the object’s data members and set up any necessary resources. Constructors have the same name as the class and do not return any value, not even void.

```cpp
Robot() {
    cout << "The robot class is Initialized" << endl;
    method1();  // Calls method1 automatically when a object is created.
    method2();  // Calls method2 automatically when a object is created.
}
```

## Key take away points about Constructor

* **Automatic Invocation** : The constructor is called automatically when an object is instantiated.

* **No Return Type**: Constructors don’t have a return type (not even void).

* **Overloading**: You can have more than one constructor in a class with different parameters (constructor overloading).

* **Default Constructor**: If no constructor is defined, the compiler provides a default constructor.


## Overview of the code
```cpp
#include <iostream>
using namespace std;

class Robot {
public:
    // Constructor
    Robot() {
        cout << "Robot is created!" << endl;
    }
};

int main() {
    Robot myRobot;  // The constructor is automatically called here
    return 0;
}
```
