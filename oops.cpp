// Getting started with OOPS (Object Oriented Programming)

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     int age;
//     string name;
//     int weight;

//     int eat()
//     {
//         cout << "Eating..!\n";
//     }

//     int sleep()
//     {
//         cout << "Sleeping...\n";
//     }
//     // behaviour
//     int getWeight()
//     {
//         return weight;
//     }

//     void setWeight(int w)
//     {
//         weight = w;
//     }

//     // default constructor
//     Animal()
//     {
//         this->weight = 0;
//         this->age = 0;
//         this->name = "";
//         cout << "Default constructor called\n";
//     }

//     // Parameterised constructor
//     Animal(int age)
//     {
//         this->age = age;
//         cout << "Parameterised constructor is called\n";
//     }

//     // Multiple Parameterised constructor
//     Animal(int age, int weight, string name)
//     {
//         this->age = age;
//         this->weight = weight;
//         this->name = name;
//         cout << "Multiple parameterised constructor called\n";
//     }
// };

// main()
// {
//     // Object creation
//     // --1. Static
//     Animal ramesh;
//     ramesh.age = 12;
//     ramesh.name = "Lion";
//     cout << "Age of ramesh is " << ramesh.age << endl;

//     // Dynamic memory allocation
//     Animal *suresh = new Animal;

//     // 1st way
//     (*suresh).age = 22;
//     (*suresh).name = "Sheru";

//     // 2nd way
//     suresh->age = 11;
//     suresh->name = "Baby";

//     suresh->eat();
//     suresh->sleep();

//     cout << "Age is suresh is " << suresh->age << endl;
//     cout << "Name of suresh is " << suresh->name << endl;

//     return 0;
// }

// Encapsulation
// Basically we wrap data members through encapsulation
//

// Inheritence

// #include <iostream>
// using namespace std;

// // parent class
// class Animal
// {
// public:
//     int age;
//     int weight;

//     void eat()
//     {
//         cout << "Eating " << endl;
//     }
// };

// // now creating a child class
// class Dog : public Animal
// {
// };

// int main()
// {
//     Dog ob1;
//     ob1.eat();

//     return 0;
// }

// Public, private and protected
// #include <iostream>
// using namespace std;

// class abc
// {
// private:
//     int age;
// };

// class xyz : public abc
// {
// public: // here we are accessing private member as public
//     void print()
//     {
//         cout << this->age;  // it will be not accessable
//     }
// };

// int main()
// {
//     xyz ob1;
//     ob1.print();
// }

/*
 * Types of Inheritance
 * Single
 * Multilevel
 * Hierarechical
 * Hybrid
 */

// Single Inheritance
// In this, there is a single parent class and a single child class. We've already done it above.

// Let's do one more example
// #include <iostream>
// using namespace std;

// class Car
// {
// public:
//     string name;
//     int weight;
//     int age;

//     void speedUp()
//     {
//         cout << "Speeding Up" << endl;
//     }

//     void breakingUp()
//     {
//         cout << "Breaking up the car" << endl;
//     }
// };

// class Scorpio : public Car
// {
// };

// int main()
// {
//     Scorpio arshadcar;
//     arshadcar.speedUp();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Fruit
// {
// public:
//     string name;
// };

// class Mango : public Fruit
// {
// public:
//     int weight;
// };

// class Alphanso : public Mango
// {
// public:
//     int sugerLevel;
// };

// int main()
// {
//     Alphanso a;
//     cout << a.name << " " << a.weight << " " << a.sugerLevel << endl;

//     return 0;
// }

// Multiple Inheritence

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     int physics;
// };

// class B
// {
// public:
//     int chemistry;
// };

// class C : public A, public B
// {
// public:
//     int Maths;
// };

// int main()
// {
//     C obj;
//     cout << obj.physics << " " << obj.chemistry << " " << obj.Maths << endl;

//     return 0;
// }

// Dimond problem
// When we use multiple object with same name then we have to use scope resolution to avoid error, see

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     int chemistry;

//     A()
//     {
//         chemistry = 110;
//     }
// };

// class B
// {
// public:
//     int chemistry;

//     B()
//     {
//         chemistry = 450;
//     }
// };

// class C : public A, public B
// {
// public:
//     int Maths;
// };

// int main()
// {
//     C obj;
//     cout << obj.B::chemistry << " " << obj.A::chemistry << " " << obj.Maths << endl;

//     return 0;
// }

// Hierarchical Inherihance

// #include <iostream>
// using namespace std;

// // Creating parent class
// class Car
// {
// public:
//     int age;
//     int weight;
//     string name;

//     void speedUp()
//     {
//         cout << "Speeding Up " << endl;
//     }
// };

// // creating child class
// class Mercedes : public Car
// {
//     // this is empty
// };

// // creating child class
// class Fortuner : public Car
// {
//     // this is empty
// };

// // here in hierachical multiple child classes is accessing one parent class

// int main()
// {
//     Mercedes benz;
//     Fortuner f11;

//     benz.speedUp();
//     f11.speedUp();

//     return 0;
// }

/*
 * ----------- Next Topic ---------
 * Polymorphism : It means one thing exiting in multiple forms
 */

#include <iostream>
using namespace std;

class Maths
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }

    int sum(int a, int b, int c)
    {
        return a + b + c;
    }

    int sum(int a, float b)
    {
        return a + b;
    }

    // here sum function is existing in multiple forms (3 forms), so it is called polymorphism
    ;
};

int main()
{
    Maths obj;

    cout << "Functions with two parameters " << obj.sum(2, 5) << endl;
    cout << "Function with three parameters " << obj.sum(2, 4, 6) << endl;
    cout << "Function with float value " << obj.sum(12, 4.12f) << endl;
}
