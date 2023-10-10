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

// #include <iostream>
// using namespace std;

// class Maths
// {
// public:
//     int sum(int a, int b)
//     {
//         return a + b;
//     }

//     int sum(int a, int b, int c)
//     {
//         return a + b + c;
//     }

//     int sum(int a, float b)
//     {
//         return a + b;
//     }

//     // here sum function is existing in multiple forms (3 forms), so it is called polymorphism
//     ;
// };

// int main()
// {
//     Maths obj;

//     cout << "Functions with two parameters " << obj.sum(2, 5) << endl;
//     cout << "Function with three parameters " << obj.sum(2, 4, 6) << endl;
//     cout << "Function with float value " << obj.sum(12, 4.12f) << endl;
// }

// Let's Dive deep into polymorphism

// Overriding Function in polymorphism

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     void speak()
//     {
//         cout << "Speaking " << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     // override
//     void speak()
//     {
//         cout << "Speaking 2" << endl;
//     }
// };

// int main()
// {
//     Dog obj;
//     obj.speak();

//     return 0;
// }

// Memory allocation

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     void speak()
//     {
//         cout << "Speaking ..." << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void speak()
//     {
//         cout << "Barking..." << endl;
//     }
// };

// int main()
// {
//     Animal *a = new Dog();

//     return 0;
// }

/*  ---------- NEXT TOPIC : Const Keyword ------------
 * -> It is immutable
 * -> It if once we assign value to const keyword we can't reassign them
 *
 */

// #include <iostream>
// using namespace std;

// int main()
// {
//     const int x = 5; // x is constant
//     // we can't re-assign a value
//     // works as just like a promise
//     // x = 10; // it will give error

//     // 2. Const with pointers
//     // int *a = new int;
//     // *a = 2;
//     // cout << *a << endl;
//     // int b = 5;
//     // a = &b;
//     // cout << *a << endl;

//     // CONST Pointer, not Non-Const Data

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int x = 2; // GLOBAL Variable

// int main()
// {
//     ::x = 4;
//     int x = 20;

//     cout << x << endl;
//     cout << ::x << endl;

//     {
//         int x = 50;
//         cout << x << endl;
//         cout << ::x << endl;
//     }

//     return 0;
// }

// Static in class
// #include <iostream>
// using namespace std;

// class abc
// {
//     int x, y;

//     void print() const
//     {
//         cout << this->x << " " << this->y << endl;
//     }
// };

// int main()
// {
//     abc ob1 = {1, 2};
//     abc obj2 = {4, 5};
//     ob1.print();
//     obj2.print();

//     return 0;
// }

// Static data members

// #include <iostream>
// using namespace std;

// class abc
// {
// public:
//     static int x, y;

//     void print() const
//     {
//         cout << x << " " << y << endl;
//     }
// };

// int abc::x;
// int abc::y;

// int main()
// {
//     abc ob1;
// }

// Private Constructor
class Singleton
{
public:
    static Singleton &getInstance()
    {
        static Singleton instance;
        return instance;
    }

private:
    Singleton() {}
};

int main()
{
    // This won't work, as the constructor is private
    // Singleton s;

    Singleton &instance = Singleton::getInstance();
    // Use the Singleton instance
    return 0;
}

// Virtual Constructor
class Base
{
public:
    virtual void print()
    {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base
{
public:
    static Base *create()
    {
        return new Derived();
    }

    void print() override
    {
        std::cout << "Derived class" << std::endl;
    }
};

int main()
{
    Base *obj = Derived::create();
    obj->print(); // Calls the overridden method in Derived class
    delete obj;   // Don't forget to delete the object to avoid memory leaks
    return 0;
}

// Virtual Destructor
class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base
{
public:
    ~Derived() override
    {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main()
{
    Base *obj = new Derived();
    delete obj; // Calls the Derived destructor through the virtual destructor
    return 0;
}
