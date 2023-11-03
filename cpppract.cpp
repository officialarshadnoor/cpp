// #include <iostream>
// #include <queue>
// #include <vector>

// using namespace std;

// int main()
// {
//     // init
//     priority_queue<string, vector<string>, greater<string>> minHeap;
//     // input strings
//     int n;
//     cin >> n;
//     vector<string> strings(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> strings[i];
//     }

//     // insert each string into the min heap and print the heap
//     for (string str : strings)
//     {
//         minHeap.push(str);
//     }

//     // print the heap
//     while (!minHeap.empty())
//     {
//         cout << minHeap.top() << " ";
//         minHeap.pop();
//     }
//     cout << endl;

//     return 0;
// }

// Exampple of dynamic object

// #include <iostream>
// using namespace std;

// class Demo
// {
//     int x, y;

// public:
//     void getset()
//     {
//         cout << "Enter x and y : " << endl;
//         cin >> x >> y;
//         cout << "x :" << x << endl;
//         cout << "y :" << y << endl;
//     }
// };

// int main()
// {
//     Demo *p;
//     p = new Demo;
//     p->getset();
//     delete p;
// }

// #include <iostream>
// using namespace std;

// class abc
// {
//     int x, y;

// public:
//     void getset()
//     {
//         cout << "Enter value of x and y: " << endl;
//         cin >> x >> y;
//         cout << "The value of x is: " << x << endl;
//         cout << "The value of y is: " << y << endl;
//     }
// };

// int main()
// {
//     abc *p;
//     p = new abc;
//     p->getset();
//     delete p;
// }

// Dynamically allocating memory in cpp
// #include <iostream>
// using namespace std;

// int main()
// {
//     // Allocate memory for integer dynamically
//     int *dynamicInt = new int;

//     // checking memory allocation is successfull or not
//     if (dynamicInt == nullptr)
//     {
//         cout << "Memory allocation is failed!" << endl;
//     }
//     else
//     {
//         *dynamicInt = 42;
//         cout << "Dynamic integer value: " << *dynamicInt << endl;
//         delete dynamicInt;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int *dynamicInt = new int;
//     // checking memory allocation'
//     if (dynamicInt == nullptr)
//     {
//         cout << "Memory allocation is not success!" << endl;
//     }
//     else
//     {
//         *dynamicInt = 67;
//         cout << "Value at dynamicInt is : " << *dynamicInt << endl;
//         delete dynamicInt;
//         cout << "Now dynamicInt value is: " << *dynamicInt << endl;
//     }
// }

// Dynamic memory allocation for arrays using `new`

// #include <iostream>
// using namespace std;

// int main()
// {
//     int *dynamicIntArray = new int[5];

//     // checking memory allocation is successfull or not
//     if (dynamicIntArray == nullptr)
//     {
//         cout << "Memory allocation is failed" << endl;
//     }
//     else
//     {
//         dynamicIntArray[0] = 20;
//         dynamicIntArray[1] = 30;
//         dynamicIntArray[2] = 40;
//         dynamicIntArray[3] = 50;
//         dynamicIntArray[4] = 60;

//         cout << "Dynamic integer array values: \n";
//         for (int i = 0; i < 5; i++)
//         {
//             cout << dynamicIntArray[i] << " ";
//         }

//         cout << endl;

//         delete[] dynamicIntArray;
//     }
// }

// dynamic memory allocation in arrays

// #include <iostream>
// using namespace std;

// int main()
// {
//     int *dynamicIntArray = new int[5];

//     if (dynamicIntArray = nullptr)
//     {
//         cout << "Dynamic memory allocation is not success!" << endl;
//     }
//     else
//     {
//         dynamicIntArray[0] = 758;
//         dynamicIntArray[1] = 567;
//         dynamicIntArray[2] = 654;
//         dynamicIntArray[3] = 756;
//         dynamicIntArray[4] = 498;

//         for (int i = 0; i < 5; i++)
//         {
//             cout << dynamicIntArray[i] << " ";
//         }
//         cout << endl;
//         delete[] dynamicIntArray;
//     }

//     return 0;
// }

// Dynamic Memory Deallocation using delete

// #include <iostream>

// using namespace std;
// int main()
// {
//     int *dynamicInt = new int(42);
//     cout << "Dynamic integer value is " << *dynamicInt << endl;
//     delete dynamicInt;

//     cout << "Now its dynamic value is " << *dynamicInt << endl;
//     return 0;
// }

// Compile time polymorphism
// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing a shape " << endl;
//     }
//     void draw(int size)
//     {
//         cout << "Drawing a shape of size " << size << endl;
//     }
// };

// int main()
// {
//     Shape s;
//     s.draw();
//     s.draw(5);

//     return 0;
// }

// Run time polymorphism

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle " << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a rectangle" << endl;
    }
};

int main()
{
    Shape *shape1 = new Circle();
    Shape *shape2 = new Rectangle();

    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;

    return 0;
}