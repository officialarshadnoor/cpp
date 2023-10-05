// // C++ Program to demonstrate accessing of data members
// #include <iostream>
// using namespace std;
// class myClass
// {
// public:
//     string name;
//     void printName()
//     {
//         cout << "My name is " << name;
//     }
// };

// int main()
// {
//     myClass cl;
//     cl.name = "Arshad";
//     cl.printName();
//     return 0;
// }

// declaration outside class
// #include <iostream>
// using namespace std;

// class myClass
// {
// public:
//     string name;
//     int id;

//     // printname is not defined inside the class defination
//     void printname();

//     // printid is definded inside class defination
//     void printid()
//     {
//         cout << "My id is " << id << endl;
//     }
// };

// // Defination of printname using scope resolution operator ::
// void myClass::printname()
// {
//     cout << "My name is " << name << endl;
// }

// int main()
// {
//     myClass obj1;
//     obj1.name = "Arshad";
//     obj1.id = 123;

//     // calling printname() function
//     obj1.printname();

//     // calling print id
//     obj1.printid();
// }

/* Create a class called `Person` with private data mebers `name` and `age' Include constructor(s), getter and setter methods for both data members, and a method to print the person's information. */
// #include <iostream>
// #include <string>
// using namespace std;
// class Person
// {
// private:
//     string name;
//     int age;

// public:
//     Person(const string &n, int a) : name(n), age(a) {}

//     string getName() const
//     {
//         return name;
//     }

//     int getAge() const
//     {
//         return age;
//     }
//     void setName(const string &n)
//     {
//         name = n;
//     }
//     void setAge(int a)
//     {
//         age = a;
//     }

//     void printInfo() const
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// int main()
// {
//     Person person("Alice", 30);
//     person.printInfo();

//     person.setName("Bob");
//     person.setAge(25);

//     return 0;
// }

// Structure, Unions and Enumms in C++

// #include <iostream>
// using namespace std;

// struct employee
// {
//     int eId;
//     string name;
//     float salary;
// };

// int main()
// {
//     struct employee arshad;
//     arshad.eId = 13;
//     arshad.name = "Arshad Noor";
//     arshad.salary = 1500000000;
//     cout << "Employee Id is " << arshad.eId << endl;
//     cout << "Employee Name is " << arshad.name << endl;
//     cout << "Employee salary is " << arshad.salary;

//     return 0;
// }

// Unions
// It provides us a better memory management
// We can use one value at a time unlike struct.
// In struct we can access multiple values at same time

// #include <iostream>
// using namespace std;

// union myUnion
// {
//     int intValue;
//     float floatValue;
//     char charValue;
// };

// int main()
// {
//     myUnion un;
//     un.intValue = 42;
//     cout << "Integer value: " << un.intValue << endl;

//     un.floatValue = 3.14;
//     cout << "Float value: " << un.floatValue << endl;

//     un.charValue = 'A';
//     cout << "Char value: " << un.charValue << endl;

//     return 0;
// }

// Union with Struct

// #include <iostream>
// using namespace std;

// struct myStruct
// {
//     int id;
//     char type;
// };

// union dataUnion
// {
//     int intValue;
//     float floatValue;
//     char stringValue[20];
// };

// int main()
// {
//     myStruct obj;
//     obj.id = 1;
//     obj.type = 'I';

//     dataUnion data;
//     data.intValue = 42;

//     cout << "ID: " << obj.id << ", Type: " << obj.type << endl;
//     cout << "Data: " << data.intValue << endl;

//     return 0;
// }

// Union in function

// #include <iostream>
// using namespace std;

// union Value
// {
//     int intValue;
//     double doubleValue;
// };

// void printValue(Value v)
// {
//     cout << "Value: " << v.intValue << endl;
// }
// int main()
// {
//     Value v;
//     v.intValue = 42;

//     printValue(v);

//     v.doubleValue = 3.14;
//     printValue(v);

//     return 0;
// }

// Union Array

// #include <iostream>
// using namespace std;

// union NumericValue
// {
//     int intValue;
//     float floatValue;
// };

// int main()
// {
//     NumericValue numbers[5];

//     for (int i = 0; i < 5; i++)
//     {
//         numbers[i].intValue = i * 10;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Element " << i << ": " << numbers[i].intValue << endl;
//     }

//     return 0;
// }

// Enum in C++
// It is a user defined data type that can be assigned some limited values
// #include <iostream>
// using namespace std;
// enum roll_no
// {
//     abhishek = 62,
//     arshad = 44,
//     hritu = 36,
//     navdeep = 45,
//     ishita = 40,
//     nikita = 69
// };

// int main()
// {
//     enum roll_no obj;
//     obj = arshad;
//     cout << "The roll no of Arshad = " << obj;

//     obj = navdeep;
//     cout << "\nRoll no of navdeep = " << obj;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // Defining enum1 Gender
//     enum Gender
//     {
//         Male,
//         Female
//     };

//     // Defining enum2 Gender2 with same values
//     // This is throw error
//     // enum Gender2
//     // {
//     //     enum Gender2{Male, Female};
//     // }

//     // Creating Gender type variable
//     Gender gender = Male;

//     cout << gender << endl;

//     return 0;
// }

// C++ program to demonstrate working of enum classes

// #include <iostream>
// using namespace std;

// int main()
// {
//     enum class Color
//     {
//         Red,
//         Green,
//         Blue
//     };
//     enum class Color2
//     {
//         Red,
//         Black,
//         White
//     };
//     enum class People
//     {
//         Good,
//         Bad
//     };

//     // An enum value can now be used to create variables
//     int Green = 10;

//     // Intantiating the Enum Class
//     Color x = Color::Green;

//     // Compasision now is completely type-safe
//     if (x == Color::Red)
//         cout << "It's Red\n";
//     else
//         cout << "It's not Red\n";

//     People p = People::Good;

//     if (p == People::Bad)
//         cout << "Bad people\n";
//     else
//         cout << "Good People\n";

//     // gives an error
//     // if (x == p)
//     //     cout << "red is equal to good";

//     // won't work as there is no implicit conversion to int
//     // cout << x;

//     cout << int(x);

//     return 0;
// }

// Inline Functions and Non-inline functions
// #include <iostream>
// using namespace std;

// // While we execute same function multiple times with different values then inline functions makes it a bit faster to load
// // See the example below
// inline int product(int a, int b)
// {
//     return a * b;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter num1 and num2 : \n";
//     cin >> a >> b;

//     cout << "Product of num1 and num2 is " << product(a, b);

//     cout << product(10, 20) << endl;
//     cout << product(10, 20) << endl;
//     cout << product(10, 20) << endl;
//     cout << product(10, 20) << endl;
//     cout << product(10, 20) << endl;
//     cout << product(10, 20) << endl;
//     cout << product(10, 20) << endl;
// }

// Inline member function problems

// Problem 1:
/* Write a C++ class Rectangle that represents a rectangle with length and width as data members. Implement an inline member function calculateArea that calculates and returns the area of the rectangle.  */

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// private:
//     double length;
//     double width;

// public:
//     double calculateArea(float length, float width)
//     {
//         return length * width;
//     }
// };

// int main()
// {
//     Rectangle r;
//     cout << "Area of rectangle : " << r.calculateArea(5.0, 3.0);

//     return 0;
// }

// Static Data Member
// Static data member alwways initialize with zero

// #include <iostream>
// using namespace std;

// class demo
// {
//     int x, y;
//     static int z;

// public:
//     void getdata(int a, int b)
//     {
//         x = a;
//         y = b;
//         z = z + 1;
//     }
//     void putdata()
//     {
//         cout << "x=" << x << endl
//              << "y=" << y << endl
//              << "z=" << z << endl;
//     }
// };

// int demo::z;
// int main()
// {
//     demo aa, bb;
//     aa.getdata(5, 10);
//     aa.putdata();
//     bb.getdata(30, 50);
//     bb.putdata();

//     return 0;
// }

// #include <iostream>

// class MyClass
// {
// public:
//     static int staticData; // Declaration of a static data member
// };

// // Initialization of the static data member
// int MyClass::staticData = 0;

// int main()
// {
//     MyClass obj1, obj2;

//     obj1.staticData = 42;
//     std::cout << "obj1.staticData: " << obj1.staticData << std::endl;
//     std::cout << "obj2.staticData: " << obj2.staticData << std::endl;

//     // Accessing the static data member without an object
//     MyClass::staticData = 100;
//     std::cout << "MyClass::staticData: " << MyClass::staticData << std::endl;

//     return 0;
// }

// Default Arguments

// #include <iostream>
// using namespace std;

// int sum(int a, int b, int c = 6)
// {
//     return a + b + c;
// }

// int main()
// {
//     int a = 5, b = 6;
//     cout << sum(a, b); // here value of c is not required becoz defualt argument is passed in function

//     return 0;
// }

// Manipulators

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     // int num = 42;
//     // cout << setw(5) << num << endl;

//     // setprecision is used for precision floating point number. see eg
//     // double pi = 3.141592653589793;
//     // cout << setprecision(5) << pi << endl;

// }

// Friend Class
// To access private members of any class we need to use friend class to get the access

// #include <iostream>
// using namespace std;
// class A
// {
//     int x;
//     friend class B;
// };

// class B
// {
// public:
//     void display(A t1)
//     {
//         t1.x = 20;
//         cout << "Value of x is: " << t1.x;
//     }
// };

// int main()
// {
//     A obj1;
//     B obj2;

//     obj2.display(obj1);
// }

// Reference variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int &b = a;
//     cout << a << " " << b << endl;
//     b++;
//     cout << a << " " << b << endl;
// }

// -------------- Pointers in C++  ---------------//

// We generally use pointers to store the address of any variable

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 5;
//     int *ptr = &num;

//     cout << "Value of num: " << num << endl
//          << "Value of ptr : " << *ptr << endl;
//     num++;
//     cout << "Value of num: " << num << endl
//          << "Value of ptr : " << *ptr << endl;
// }

// Simple program to demonstrate use of pointers

// #include <iostream>
// using namespace std;

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x = 5, y = 10;
//     cout << "Before swap: x = " << x << ", y = " << y << endl;

//     swap(&x, &y);

//     cout << "After swap: x = " << x << ", y = " << y << endl;
// }

// Program to dynamically allocate memory for an array of integers and then frees the memory when done

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = i;
//     }
//     cout << "Array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     delete[] arr;
//     return 0;
// }

// Linear search

// #include <iostream>
// using namespace std;
// int linearSearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {10, 20, 11, 13, 8, 16, 24, 45};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 13;

//     int result = linearSearch(arr, size, target);

//     if (result != -1)
//     {
//         cout << "Element found at: " << result;
//     }
//     else
//     {
//         cout << "Element is not found !";
//     }
// }

// #include <iostream>
// using namespace std;
// void insertElement(int arr[], int &size, int position, int element)
// {
//     // Check if the position is valid
//     if (position < 0 || position > size)
//     {
//         return;
//     }

//     // shift elements to make space for the new element
//     for (int i = size; i > position; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     // Insert the element at the specified position
//     arr[position] = element;

//     size++;
// }

// int main()
// {
//     int arr[100] = {1, 2, 3, 4, 5};
//     int size = 5;

//     int position = 2;
//     int element = 10;

//     insertElement(arr, size, position, element);

//     cout << "Array after insertion: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// selection sorting

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include <iostream>
using namespace std;

void time(int &p1, int &p2)
{
    int total = p1 + p2;
    if (total > 60)
    {
        cout << "Warning" << endl;
    }
    else
    {
        cout << "Normal" << endl;
    }
}

int main()
{
    int t1, t2;
    cin >> t1 >> t2;
    time(t1, t2); // Pass t1 and t2 by reference
    return 0;
}
