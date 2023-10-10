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

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}

// to print a message
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"Welcome to C++\n";
//	cout<<"My name is abc";
//}

// to input the name and roll number of a student
//int main(){
//	string name;
//	int roll_no;
//	cout<<"Enter the name and roll no\n";
//	cin>>name;
//	cin>>roll_no;
//	cout<<"Your name is "<<name<<" and roll no is "<<roll_no;
//	return 0;
//}

// to calculate sum of 2 floats
//int main(){
//	float a,b,c;
//	cout<<"Enter the value of a and b\n";
//	cin>>a>>b;
//	c=a+b;
//	cout<<"Sum is "<<c;
//	return 0;
//}

// to input name and marks of 5 subjects of a student and print the name and its average
//int main(){
//	string name;
//	int s1,s2,s3,s4,s5,av;
//	cout<<"Enter your name\n";
//	cin>>name;
//	cout<<"Enter the marks of 5 subjects \n";
//	cin>>s1>>s2>>s3>>s4>>s5;
//	av=(s1+s2+s3+s4+s5)/5;
//	cout<<"Average marks of"<<name<<" of 5 subject is "<<av;
//	return 0;
//}


// program to swap two integers using third variable

//#include<iostream>
//using namespace std;
//int main(){
//	int a,b,c;
//	cout<<"Enter the value of a and b\n";
//	cin>>a>>b;
//	c=a;
//	a=b;
//	b=c;
//	cout<<"After swap\n";
//	cout<<"a is "<<a<<" and b is "<<b;
//}

// Program to find area of a triangle
//#include<iostream>
//using namespace std;
//int main(){
//	float b,h,area;
//	cout<<"Enter the value of b\n";
//	cin>>b;
//	cout<<"Enter the value of h\n";
//	cin>>h;
//	area=(b*h)/2;
//	cout<<"Area of triangle is "<<area;
//	return 0;
//}


// Program to find greater of two integers
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b;
//	cout<<"Enter two numbers\n";
//	cin>>a>>b;
//	if (a>b)
//		cout<<a<<" is greater than "<<b;
//	else
//		cout<<b<<" is greater than "<<a;
//	return 0;
//}

// Program to find greatest of three integers
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b,c;
//	cout<<"Enter the value of a, b, and c\n";
//	cin>>a>>b>>c;
//	if (a>b&&a>c)
//	cout<<a<<" is the greatest of all three";
//	else if (b>a&& a>b)
//	cout<<b<<" is the greatest of all three";
//	else
//	cout<<c<<" is the greatest of all three";
//	return 0;
//}

// Program to check whether a number is even or odd
//#include<iostream>
//using namespace std;
//int main(){
//	int a;
//	cout<<"Enter a number\n";
//	cin>>a;
//	if (a%2==0)
//	cout<<"The number is even";
//	else
//	cout<<"The number is odd";
//	return 0;
//
//}

// write a program to triverse the elements of the array
//#include<iostream>
//using namespace std;
//main(){
//	int a[5] = {4,5,7,26,2};
//	for (int i=0;i<5;i++){
//		cout<<a[i]<<endl;
//	}
//	return 0;
//}

// Using classes in c++
//#include<iostream>
//using namespace std;
//class rectangle {
//	private:
//		int l,b;
//	public:
//		void get(){
//			cout<<"Enter the l and b\n";
//			cin>>l>>b;
//		}
//		void area(){
//			cout<<"Area is "<<l*b<<endl;
//		}
//};
//int main(){
//	rectangle r1, r2;
//	r1.get();
//	r1.area();
//	r2.get();
//	r2.area();
//}


// Using objects and class
//#include <iostream>
//using namespace std;
//class student {
//	int roll_no;
//	string name;
//	float marks;
//	public:
//		void get(){
//			cout<<"Enter the roll no, name and marks\n";
//			cin>>roll_no>>name>>marks;
//		}
//		void show(){
//			cout<<roll_no<<"\t"<<name<<"\t"<<marks<<"\n";
//		}
//};
//int main(){
//	student s[5];
//	int i;
//	for (i=0;i<=4;i++){
//		s[i].get();
//	for (i=0;i<=4;i++){
//		s[i].show();
//	}
//	}
//}

// Create a class calculators which will take 2 data members a and b
/* 5 member functions get(), add(), sub(), div() to perform the operations */

//#include<iostream>
//using namespace std;
//class calculator{
//	int a,b;
//	public:
//		void get(){
//			cout<<"Enter the numbers a and b\n";
//			cin>>a>>b;
//		}
//		void add(){
////			add = a + b;
//			cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
//		}
//		void sub(){
////			sub = a - b;
//			cout<<"Substraction of "<<a<<" and "<<b<<" is "<<a - b<<endl;
//		}
//		void mul(){
////			mul = a * b;
//			cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a * b<<endl;
//		}
//		void div(){
////			div = a / b;
//			cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
//		}
//} c;
//
//int main(){
//	c.get();
//	c.add();
//	c.sub();
//	c.mul();
//	c.div();
//}

// Create a class employee woth emp_id and salary as data members
// void get() and void show() as member function
// show function need to print those employees whose salary is > 80000
// make this program for 5 employees

//#include <iostream>
//using namespace std;
//
//class employee {
//	int emp_id;
//	string name;
//	float salary;
//	public:
//		void get(){
//			cout<<"Enter the emp id, name and salary\n";
//			cin>>emp_id>>name>>salary;
//		}
//		void show(){
//			if (salary>80000)
//			cout<<emp_id<<" "<<name<<" "<<salary<<endl;
//		}
//};
//int main(){
//	employee e[5];
//	int i;
//	for (i=0;i<=4;i++)
//	e[i].get();
//	for (i=0;i<=4;i++)
//	e[i].show();
//}



// Defining the member function outside the class a member function can be defined outside the class by using scope resolution apartator
//#include <iostream>
//using namespace std;
//class circle{
//	float r;
//	public:
//	void get();
//	void area();
//} c;
//void circle :: get(){
//	cout<<"Enter the value of r\n";
//	cin>>r;
//}
//void circle :: area(){
//	cout<<"Area is "<<3.14*r*r;
//}
//int main(){
//	c.get();
//	c.area();
//}

// Structure in c++
//#include <iostream>
//using namespace std;
//struct student {
//	int r_no;
//	string name;
//};
//int main(){
//	student s1;
//	cout<<"Enter the detail of s1 student\n";
//	cin>>s1.r_no>>s1.name;
////	cout<<s1.r_no<<" "<<s1.name;
//
////student s2 = {2, "Abc"};
//cout<<s1.r_no<<" "<<s1.name;
//}

//#include <iostream>
//using namespace std;
//struct employee {
//	private:
//		int emp_id;
//		string name;
//		float sal;
//	public:
//		void get(){
//			cout<<"Enter emp id, name, and salary\n";
//			cin>>emp_id>>name>>sal;
//		}
//		void show(){
//			cout<<"Emp Id\tName\tSalary\n";
//			cout<<emp_id<<"\t"<<name<<"\t"<<sal;
//		}
//};
//int main(){
//	employee e;
//	e.get();
//	e.show();
//}


// using union 
//#include<iostream>
//using namespace std;
//union car{
//	int model_no;
//	char name[30];
//};
//int main(){
//	car c;
//	cout<<"Enter model no\n";
//	cin>>c.model_no;
//	cout<<"Model no is "<<c.model_no<<endl;
//	cout<<"Enter the name\n";
//	cin>>c.name;
//	cout<<"Name of car is "<<c.name;
//}

// create a structure time which will take 3 data member hrs, min and sec and convert it into minutes and seconds. 
// Input wll be time in hrs and output will be time in minutes and sec
//#include <iostream>
//using namespace std;
//struct time {
//	int hrs, min, sec;
//};
//int main(){
//	time t;
//	cout<<"Enter the time in hours\n";
//	cin>>t.hrs;
//	t.min=t.hrs*60;
//	cout<<"In minutes "<<t.min<<endl;
//	t.sec = t.hrs*3600;
//	cout<<"In sec "<<t.sec;
//}

// create a union book with b_id, b_name, b_price
// input data of a book and print it one by one
//#include <iostream>
//using namespace std;
//union book{
//	int b_id;
//	char b_name[30];
//	float b_price;
//};
//
//int main(){
//	book b;
//	cout<<"Enter book id\n";
//	cin>>b.b_id;
//	cout<<"Book id: "<<b.b_id<<endl;
//	cout<<"Enter book name\n";
//	cin>>b.b_name;
//	cout<<"Book name: "<<b.b_name<<endl;
//	cout<<"Enter book price\n";
//	cin>>b.b_price;
//	cout<<"Book price: "<<b.b_price;
//}

// enum operations

//#include <iostream>
//using namespace std;
//enum operations {Add,Sub,Mul,Div
//};
//int main(){
//	int a,b,choice;
//	cout<<"Enter the value of a and b\n";
//	cin>>a>>b;
//	cout<<"Enter 0 for add, 1 for Sub, 2 for mul and 3 for div\n";
//	cin>>choice;
//	switch(choice){
//		case Add:
//			cout<<"Sum is "<<a+b<<endl;
//			break;
//		case Sub:
//			cout<<"Sub is "<<a-b<<endl;
//			break;
//		case Mul:
//			cout<<"Mul is "<<a*b<<endl;
//			break;
//		case Div:
//			cout<<"Div is "<<a/b<<endl;
//			break;
//	}
//}


// Inline functions in c++
//#include <iostream>
//using namespace std;
//inline int greater1(int x, int y){  // by using inline function we can increase execution speed. Thus it doesn't make request again and again to function.
//	return x>y?x:y;
//}
//int main(){
//	cout<<"Greater is "<<greater1(12,34);
//	cout<<"\nGreater is "<<greater1(56,34);
//}

// calculator
//#include <iostream>
//using namespace std;
//class calculator{
//	int a,b;
//	public:
//	void get(){
//		cout<<"Enter number a and b\n";
//		cin>>a>>b;
//	}
//	int add();
//	int sub();
//	int mul();
//	int div();
//};
//
//inline int calculator :: add(){
//	return (a+b);
//}
//inline int calculator :: sub(){
//	return (a-b);
//}
//inline int calculator :: mul(){
//	return (a*b);
//}
//inline int calculator :: div(){
//	return (a/b);
//}


// static data members
//#include<iostream>
//using namespace std;
//class student {
//	static int roll_no;
//	string name;
//	float marks;
//	public:
//		void get(){
//			cout<<"Enter the name and marks\n";
//			cin>>name>>marks;
//			roll_no++;
//		}
//		void show(){
//			cout<<roll_no<<" "<<name<<" "<<marks<<"\n";
//		}
//};
//int student :: roll_no = 12204331;
//int main(){
//	student s[5];
//	int i;
//	for (i=0;i<=4;i++){
//		s[i].get();
//		s[i].show();
//	}
//}

//#include<iostream>
//using namespace std;
//class employee {
//	static int emp_id;
//	static int count;
//	string name;
//	float sal;
//	public:
//		void get(){
//			cout<<"Enter name and sal\n";
//			cin>>name>>sal;
//			count++;
//			emp_id++;
//		}
//		void show(){
//			cout<<emp_id<<" "<<name<<" "<<sal<<"\n";
//		}
//		static int count_emp(){
//			return count;
//		}
//};
//int employee :: count = 0;
//int employee :: emp_id = 101;
//int main(){
//	employee e[5];
//	int i;
//	for (i=0;i<=4;i++){
//		e[i].get();
//		e[i].show();
//	}
//	cout<<"\nNumber of employees joined "<<employee::count_emp();
//}


// Function without return and without arguments
//#include<iostream>
//using namespace std;
//void greater1(){
//	int a,b;
//	cout<<"\n\nEnter the value of a and b\n";
//	cin>>a>>b;
//	if(a>b)
//		cout<<a<<" is greater\n";
//	else 
//		cout<<b<<" is greater\n";
//}
//int main(){
//for (int i=0;i<5;i++)
//	greater1();
//}

//#include<iostream>
//using namespace std;
//void simple_interest(float p,float r, float t){
//	cout<<"Simple interest is "<<(p*r*t)/100;
//}
//int main(){
//	simple_interest(12000,7.1,5);
//	float p,r,t;
//	cout<<"\nEnter p,r,t\n";
//	cin>>p>>r>>t;
//	simple_interest(p,r,t);
//}


// function with return but without argument
//#include<iostream>
//using namespace std;
//float area(){
//	float r;
//	cout<<"Enter the value of r\n";
//	cin>>r;
//	return (3.14*r*r);
//}
//int main(){
//	cout<<"Area of circle is "<<area()<<endl;
//	cout<<"\nArea of circle is "<<area();
// }

//function with return and with arguments
//#include<iostream>
//using namespace std;
//int area_of_rectangle(int l, int b) {
//	return (l*b);
//}
//int main(){
//	cout<<"Area of rect is "<<area_of_rectangle(12,34);
//	int l,b;
//	cout<<"\nEnter the value of l and b";
//	cin>>l>>b;
//	cout<<"\nArea of rect is "<<area_of_rectangle(l,b);
//}

// write a function to calculate factorial of a number by using with return and argument 
//#include<iostream>
//using namespace std;
//int factorial(int n){
//	int i,f=1;
//	for (i=1;i<=n;i++){
//		f=f*i;
//	}
//	return f;
//}
//int main(){
//	cout<<"Factorial of 5 is "<<factorial(5);
//}

// write a function to retun reverse of a number by using function with return type and argument
//#include<iostream>
//using namespace std;
//int reverse(int n){
//	int rev=0,t;
//	while(n!=0){
//		t=n%10;
//		rev=rev*10+t;
//		n=n/10;
//	}
//	return rev;
//}
//int main(){
//	int n;
//	cout<<"Enter a number \n";
//	cin>>n;
//	cout<<"Reverse is "<<reverse(n);
//}
//

// function with defualt parameters
//#include<iostream>
//using namespace std;
//int sum(int x=2, int y=5, int z=10){
//	return (x+y+z);
//}
//int main(){
//	cout<<"Sum is "<<sum(); // all the default values will be considered
//	cout<<"\nSum is "<<sum(12); // default value of x will be replaced by 12
//	cout<<"\nSum is "<<sum(12,10); //default value of x and y will replaced by 12, and 10
//	cout<<"\nSum is "<<sum(12,10,14); // default value will replaced by 12, 10, and 14
//}

// 
//#include <iostream>
//using namespace std;
//class Student {
//	int roll_no;
//	string name,sec;
//	public:
//		void get(string s="Unallotted"){
//			cout<<"Enter the roll_no and name\n";
//			cin>>roll_no>>name;
//			sec=s;
//		}
//		void show(){
//			cout<<roll_no<<"\t"<<name<<"\t"<<sec<<" \n";
//		}
//};
//int main(){
//	Student s1,s2;
//	s1.get();
//	s2.get("K22UM");
//	s1.show();
//	s2.show();
//}

// Write a program to calculate simple interest by keeping the rate of interest as 7.1% using class and member function with defualt argument
//#include<iostream>
//using namespace std;
//class Simple_interest {
//	float p,t,r;
//	public:
//		void get(float x,float y,float z=7.1){
//			p=x;
//			t=y;
//			r=z;
//		}
//		float calculate(){
//			return (p*t*r)/100;
//		}
//};
//int main(){
//	Simple_interest s1,s2;
//	s1.get(12000,5);
//	cout<<"Simple interest is "<<s1.calculate();
//	s2.get(15000,5,8.1);
//	cout<<"Simple interest is "<<s2.calculate();
//}

// Function overloading
//#include<iostream>
//using namespace std;
//int add(int a, int b){
//	return (a+b);
//}
//float add(float a,float b){
//	return (a+b);
//}
//int add(int a,int b, int c){
//	return (a+b+c);
//}
//float add(float a,float b, float c){
//	return (a+b+c);
//}
//int main(){
//	cout<<"Sum of 2 ints "<<add(12,34);
//	cout<<"\nSum of 2 floats "<<add(12.67f,24.35f);
//	cout<<"\nSum of 3 ints "<<add(12,34,55);
//	cout<<"\nSum of 3 floats "<<add(12.23f,34.44f,98.45f);
//}


// To calculate area of rectangle, circle and tringle using function overloading
//#include <iostream>
//using namespace std;
//float area_of_rect(float l, float w){
//	return (l*w);
//}
//float area_of_circle(float r){
//	return ((22/7)*r*r);
//}
//float area_of_triangle(float b, float h){
//	return ((1/2)*b*h);
//}
//
//int main(){
//	cout<<"Area of rectangle is "<<area_of_rect(45.5f,4.6f);
//	cout<<"\nArea of circle is "<<area_of_circle(45.8f);
//	cout<<"\nArea of triangle is "<<area_of_triangle(56.7f,48.7f);
//}

//#include<iostream>
//using namespace std;
//class abc {
//	int l,b;
//	float r;
//	public:
//		int area(int x, int y){
//			l = x;
//			b = y;
//			return (l*b);
//		}
//		float area(float t){
//			r = t;
//			return(3.14*r*r);
//		}
//};
//int main(){
//	abc ob;
//	cout<<"Area of rectangle is "<<ob.area(12,34);
//	cout<<"\nArea of circle is "<<ob.area(34.56f);
//}


//#include <iostream>
//using namespace std;
//class abc {
//	int a,b,c; //private members
//	public:
//		void get(){
//			cout<<"Enter the value of a,b,c\n";
//			cin>>a>>b>>c;
//		}
//		friend int greatest(abc ob);
//};
//int greatest (abc ob){
//	if(ob.a>ob.b && ob.a>ob.c)
//	return ob.a;
//	else if(ob.b>ob.c)
//	return ob.b;
//	else
//	return ob.c;
//}
//int main(){
//	abc ob;
//	ob.get();
//	cout<<"Greatest is "<<greatest(ob);
//}

// Write a program declare a class calculate by taking 1 data members as redius use one member function get() to take the inputs of radius. 
// Use 2 friend functions to calculate area and circumference of circle by accessing private radius
//#include <iostream>
//using namespace std;
//class calculate {
//	float r;
//	public:
//		void get(){
//			cout<<"Enter radius: \n";
//			cin>>r;
//		}
//		friend float area(calculate c);
//		friend float cir(calculate c);
//};
//float area(calculate c){
//	return (3.14*c.r*c.r);
//}
//float cir(calculate c){
//	return (2*3.14*c.r);
//}
//int main(){
//	calculate c;
//	c.get();
//	cout<<"Area of circumference "<<area(c)<<endl;
//	cout<<"Area of circle "<<cir(c);
//}

// If class B is a friend of class A then class B can access the private and protected members of class A
//#include<iostream>
//using namespace std;
//class B;
//class A{
//	int x;
//	void get(int i){
//		x=i;
//	}
//	friend class B;
//};
//class B {
//	int y;
//	public:
//		void get(int z){
//			y = z;
//		}
//		void sum(){
//			A ob;
//			ob.get(12);
//			cout<<ob.x+y;
//		}
//};
//int main(){
//	B ob;
//	ob.get(34);
//	ob.sum();
//}

// Create a class student with roll_no, name and marks of 5 subjects
// take input using get function and make a class result as a friend of student class and print the roll_no, name and total marks obtained
//#include<iostream>
//using namespace std;
//class student{
//	int roll_no;
//	string name;
//	float m1,m2,m3,m4,m5;
//	public:
//		void get(){
//			cout<<"Enter roll no, name and marks of student\n";
//			cin>>roll_no;
//			cin>>name;
//			cin>>m1>>m2>>m3>>m4>>m5;
//		}
//		friend class result;
//};
//class result {
//	public:
//		void calculate(){
//			student s;
//			s.get();
//			cout<<s.roll_no<<" "<<s.name<<" "<<s.m1+s.m2+s.m3+s.m4+s.m5;
//}
//};
//
//int main(){
//	student s;
//	result r;
//	s.get();
//	r.calculate();
//}

//// Manipulators example
//#include <iostream>
//using namespace std;
//int main(){
//	int x = 12;
//	cout<<"x is "<<x;
//	cout<<endl;
//	cout<<oct<<x;
//	cout<<endl;
//	cout<<hex<<x;
//	cout<<"\nEnter the value of y in oct"<<endl;
//	int y;
//	cin>>oct>>y;
//	cout<<dec<<y;
//	int b = 12000;
//	cout<<setw(10)<<setfill('*')<<b;
//}


// Refrence variable
// When a refrence variable declared as a refrence, it becomes an alternative name for an existing variable.
// A variable can be declared as a reference bu putting '&' in the declaration.
// data_type &ref = variable;
// Also we can define a reference variable as a type of variable that can act as a reference to another variable. '&' is 
// used for signifying the address of a variable or any memory.

//#include <iostream>
//using namespace std;
//int main(){
//	int x = 12;
//	int &r = x;
//	cout<<x<<" "<<r;
//	r = r + 1;
//	cout<<"\n"<<x<<" "<<r;
//	x = x + 1;
//	cout<<"\n"<<x<<" "<<r;
//}


// call by value 
// In call by value method we pass the value of variables. Any changes made to formal arguments will not chanbe the actual arguments 

//#include <iostream>
//using namespace std;
//void increase(int n){
//	n = n + 1;
//}
//int main(){
//	int n = 12;
//	cout<< "Before function call n is "<<n;
//	increase(n);
//	cout<<"\nAfter function call n is "<<n;
//	return 0;
//}

// Program to swap 2 intergers by using call by reference 
//#include<iostream>
//using namespace std;
//void swap(int &a, int &b){
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main(){
//	int num1, num2;
//	cout<<"Enter num1 value: ";
//	cin>>num1;
//	cout<<"\nEnter num2 value: ";
//	cin>>num2;
//	cout<<endl;
//	swap(num1,num2);
//	cout<<"The swapped value of num1= "<<num1<<" & num2= "<<num2<<"\n";
//	return 0;
//}


// Program to swap 2 integers by using call by address

//#include<iostream>
//using namespace std;
//void swap(int *x, int *y){
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main(){
//	int a = 12, b = 34;
//	cout<<"Before swap a is "<<a<<" and b is "<<b<<endl;
//	swap(&a,&b);
//	cout<<"\nAfter swap a is "<<a<<" and b is "<<b<<endl;
//}

// same type The syntax to declare a pointer is data_type *Pointer_var = & variable 
//#include <iostream>
//using namespace std;
//int main(){
//	int x = 12;
//	int *p = &x;
//	cout<<"\np is "<<p;
//	cout<<"\n*p is "<<*p;
//	cout<<"\n&p is "<<&p;
//	cout<<"\n&x is "<<&x;
//	float *fp;
//	float y = 12.34f;
//	fp=&y;
//	cout<<"\nfp is "<<fp;
//	cout<<"\n*fp is "<<*fp;
//}

// A pointer which is not initialized with any memory address is known as wild pointer
//#include<iostream>
//using namespace std;
//int main(){
//	int *p;
//	cout<<"Wild pointer is p "<<p;
//	int x = 12;
//	p = &x;
//	cout<<"\np is "<<p;
//}

// Null pointer 
// A pointer is said to be null pointer if it is initialized with null keyword rather than pointer point to some garbage memory address it should be initialized with null
//#include<iostream>
//using namespace std;
//int main(){
//	int *p = NULL;
//	cout<<"Null pointer is "<<p;
//	int x = 12;
//	p = &x;
//	cout<<"\np is "<<p;
//}

// Dangling pointer
// A pointer pointing to deleted variables is knwos as dagling pointers
// If a pointer points to a variable but after some time that variable  got deleted or goes out of scope but still point
// to that memory location then the pointer become dagling pointer

//#include<iostream>
//using namespace std;
//int main(){
//	int *p=NULL;
//	{
//		int x = 12;
//		p = &x;
//		cout<<"*p is "<<*p;
//	}
//	cout<<"\n*p is "<<*p;
//}

// pointer to pointer :
// A pointer to pointer can strore the address of a pointer variable itself its syntax is :
// data_type **pointer_var 

//#include <iostream>
//using namespace std;
//int main(){
//	int x = 34;
//	int *p;
//	p=&x;
//	int **pp;
//	pp=&p;
//	cout<<"p is "<<pp;
//	cout<<"\n*pp is "<<*pp;
//	cout<<"\n**pp us "<<**pp;
//}

// pointer arithmetic
// Adding a number to a pointer
//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={12,3,45,6,78};
//	int *p;
//	p=&a[0];
//	cout<<"*p is "<<*p; //12
//	p=p+1;
//	cout<<"\n*p is "<<*p; // 3
//	p=&a[0];
//	cout<<"\n*p is "<<*p;
//	*p=*p+1;
//	cout<<"\n*p is "<<*p;
//	cout<<"\na[0] is "<<a[0];
//}

// Subtracting a number from a pointer
//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={12,3,45,6,78};
//	int *p=&a[4];
//	cout<<"*p is "<<*p;  // 78
//	p=p-2;
//	cout<<"\n*p is "<<*p; // 12
//}

// We use the -> operator for accessing the members of a class
//#include<iostream>
//using namespace std;
//class rectangle{
//	int l,b;
//	public:
//		void get(){
//		cout<<"Enter the valu of l and b\n";
//		cin>>l>>b;
//	}
//	void area(){
//		cout<<"Area of rec is "<<b*b;
//	}
//};
//int main(){
//	rectangle r,*ptr;
//	ptr=&r;
//	ptr->get();
//	ptr->area();
//}

// creating dynamic objects by using pointer to pointer class and new operator

//class student{
//	int roll_no;
//	string name;
//	float marks;
//	public:
//		void get(){
//			cout<<"Enter roll no, name and marks\n";
//			cin>>roll_no>>name>>marks;
//		}
//		void show(){
//			cout<<roll_no<<" "<<name<<" "<<marks<<"\n";
//		}
//};
//int main(){
//	student *s;
//	int n;
//	cout<<"Enter the number of students\n";
//	cin>>n;
//	s= new student[n];
//	for (int i=0;i<=n;i++)
//	s[i].get();
//	for (int i=0;i<n-1;i++)
//	s[i].show();
//	delete []s;
//}

// create a class employee with emp_id, name and salary as data members. 
// Input the detail of 'n' number of employees and print those employee who are getting salary >=80000

//class employee {
//	int emp_id;
//	string name;
//	float sal;
//	public:
//		void get(){
//			cout<<"Enter the emp id, name and sal\n";
//			cin>>emp_id>>name>>sal;
//		}
//		void show(){
//			if (sal>=80000){
//				cout<<emp_id<<" "<<name<<" "<<sal<<"\n";
//			}
//		}
//};
//
//int main(){
//	employee *e;
//	int n,i;
//	cout<<"Enter the number of employee\n";
//	cin>>n;
//	e=new employee[n];
//	for (int i=0;i<=n-1;i++){
//		(e+i)->get();
//	}
//	for (int i=0;i<=n-1;i++){
//		(e+1)->show();
//	}
//}

// pointer as a data member
// we can declare a pointer as a data member of a class
//class abc {
//	int *arr,size;
//	public:
//		void set_arr(int n){
//			size = n;
//			arr = new int[size];
//			cout<<"Enter the elements of array\n";
//			for (int i=0;i<=n-1;i++){
//				cin>>arr[i];
//			}
//		}
//			void show(){
//				for (int i=0;i<=n-1;i++){
//					cout<<arr[i]<<" ";
//				}
//			}
//};
//
//int main(){
//	abc ob;
//	int b;
//	cout<<"Enter n \n";
//	cin>>n;
//	ob.set_arr(n);
//	ob.show();
//}

//
//class add {
//	int *arr1,*arr2,size;
//	public:
//		void get_arrs(int n){
//			for (int i=0;i<=size-1;i++){
//				cin>>arr1[i];
//			}
//			for (int i=0;i<=size-1;i++){
//				cin>>arr2[i];
//			}
//		}
//		void show(){
//			for (int i=0;i<=size-1;i++){
//				cout<<arr1[i]+arr2[i]<<" ";
//			}
//		}
//};
//int main(){
//	add a;
//	int n;
//	cout<<"Enter n \n";
//	cin>>n;
//	a.get_arrs(n);
//	a.show();
//}


// pointer to data member
// We can create a pointer to data member by using the following syntax;
// data_type, class_name::*ptr_name;
// ptr_name = &class_name::datamember_name
//class abc {
//	public:
//		int a,b;
//		void show(){
//			cout<<a<<" "<<b;
//		}
//};
//
//int main(){
//	abc ob;
//	int abc::*ptr1;
//	int abc ::*ptr2;
//	ptr1=&abc::a;
//	ptr2=&abc::b;
//	ob.*ptr1=12;
//	ob.*ptr2=34;
//	ob.show();
//}


//
//class rectangle {
//	public:
//		float l,b;
//		void area(){
//			cout<<"Area is "<<l*b;
//		}
//};
//int main(){
//	rectangle ob;
//	float rectangle::*ptr1;
//	float rectangle::*ptr2;
//	ptr1=&rectangle::l;
//	ptr2=&rectangle::b;
//	cout<<"Enter l and b";
//	cin>>ob.area();
//	
//}


// pointer to meember function
//class abc {
//	public:
//		int a,b;
//		void show(){
//			cout<<a<<" "<<b;
//		}
//};
//int main(){
//	abc ob;
//	int abc::*ptr1;
//	int abc::*ptr2;
//	ptr1=&abc::a;
//	ptr2=&abc::b;
//	ob.*ptr1=12;
//	ob.*ptr2=34;
//	void (abc::*ptr3)()= & abc::show;
//	(ob.*ptr3)();
//}

// Create a class circle for calculating area of circle bby taking pointer to data member radius and pointer to member function area

//class circle {
//	public:
//		float r;
//		float area(){
//			return (3.14*r*r);
//		}
//};
//
//int main(){
//	circle c;
//	float circle :: *p1;
//	p1 = &circle::r;
////	c.area()*p1=12;
//	float (circle :: *p2) ()= &circle::area;
//	c.*p1=5.5;
//	cout<<"Area of circle is "<<(c.*p2)();
//}

// this pointer is used when local variable name is same as that of data  member
//class rectangle{
//	int l,b;
//	public:
//		void set_dimensions(int l,int b){
//			this ->l=l;
//			this ->b=b;
//		}
//		int area(){
//			return (l*b);
//		}
//};
//
//int main(){
//	rectangle r;
//	r.set_dimensions(12,34);
//	cout<<"Area of circle is "<<r.area();
//}

//class book{
//	int book_id;
//	string name;
//	float price;
//	public:
//		void set_details (int book_id, string name, float price){
//			this->book_id=book_id;
//			this->name=name;
//			this->price=price;
//		}
//		void show(){
//			cout<<book_id<<" "<<name<<" "<<price<<"\n";
//		}
//};
//
//int main(){
//	book b;
//	b.set_details(101,"abc",700);
//	b.show();
//}

// create a class calculate which will calculate factorial of a member. We will take 'n' as a data member. Assign value to n using this pointer and use friend function to calculate

//class calculate {
//	int n;
//	public:
//		void set_number(int n){
//			this->n=n;
//		}
//		friend int factorial(calculate c);
//};
//int factorial(calculate c){
//	int i,f=1;
//	for (int i=1;i<=c.n;i++){
//		return f;
//	}
//}
//int main(){
//	calculate c;
//	c.set_number(5);
//	cout<<"Factorial is "<<factorial(c);
//}

// Array: 

//int main(){
//	int a[5].i;  // a[0]--a[4]
//	cout<<"Enter elements of array\n";
//	for (int i=0;i<=4;i++){
//		cin>>a[i];
//	}
//	for (int i=0;i<=4;i++){
//		cout<<a[i]<<" ";
//	}
//}
//
//intt main(){
//	int a[5] = {1,23,45,67,8};
//	for (int i=0;i<=4;i++){
//		cout<<a[i]<<" ";
//	}
//}
//
//int main(){
//	int a[5]={12,3,45};
//	for (i=0;i<=4;i++){
//		cout<<a[i]<<" ";
//	}
//}
//
//int main(){
//	int a[5]={12,34,56,78,89};
//	show();
//}

//void show(int a[],int n){
//	int i;
//	for (int i=0;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//
//int main(){
//	int a[1000];
//	int n;
//	cout<<"Enter the value of n\n";
//	cin>>n;
//	for(int i=0;i<=n;i++){
//		cin>>a[i];
//	}
//	show(a,n);
//}

// Create a class which contain a data member float 

// class abc{
// 	float marks[10];
// 	public:
// 		void get(){
// 			cout<<"Enter the marks of 10 students\n";
// 			for (int i=0;i<10;i++){
// 				cin>>marks[i];
// 			}
// 			friend float average(abc ob);
// 		}
// };
// float average (abc ob){
// 	float sum=0;
// 	for (int i=0;i<10;i++){
// 		sum=sum+ob.marks[i];
// 	}
// 	return (sum/10);
// }

// int main(){
// 	abc ob;
// 	ob.get();
// 	cout<<"Average is "<<average(ob);
// }

// pointers and arrays 
// We can use pointers to access the elements of array
// #include<iostream>
// using namespace std;
// void show(int *p,int n){
// 	int i;
// 	for (int i=0;i<5;i++){
// 		cout<<*p<<" ";
// 		p++;
// 	}
// }

// int main(){
// 	int a[]= {12,34,56,78,9};
// 	int n = sizeof(a)/sizeof(a[0]);
// 	show(a,n);
// }


//#include <iostream>
//using namespace std;
// int main(){
// 	int a[3][3] = {1,2,3,4,5,6,7,8,9},i,j;
// 	cout<<"2D array is\n";
// 	for (int i = 0;i<3;i++){
// 		for (int j=0;j<3;j++){
// 			cout<<a[i][j]<<" ";
// 		}
// 		cout<<"\n";
// 	}
// }


#include<iostream>
#include<string>
using namespace std;
//int main(){
//	string name;
//	name = "rohan sharma";
//	cout<<"Name is "<<name;
//	string name1 = "mohit kumar";
//	cout<<"\nname is "<<name1;
//	string name2("rohit kumar");
//	cout<<"\nname is "<<name2<<endl;
//	string name3;
//	cout<<"\nEnter your name\n";
//	getline(cin,name3);
//	cout<<"\nName entered is "<<name3<<endl;
//	string x =name3;
//	cout<<"Copied string is "<<x;
//	string y=name3+ " is a faculty member";
//	cout<<"\nAfter joing"<<endl<<y;

//	string s1 = "abcdef";
//	string s2 = "12345";
//	s1.insert(3,s2);
//	cout<<"s1 is "<<s1;
//	cout<<"\nLength of string s1 is "<<s1.length();
//	
//	// erase
//	s1.erase(2,3);
//	cout<<"\nmodified si is "<<s1;
//	
//	//append
//	string s3 = "abcdef";
//	string s4 = "xyzertf";
//	s3.append(s4,2,3);  // starting from 2nd character and upto 3 character
//	cout<<"\ns4 is "<<s3;
	
	
	// swap
//	string s5 = "abc";
//	string s6 = "xyz";
//	s5.swap(s6);
//	cout<<"\nAfter swap s5 and s6 are "<<s5<<" "<<s6;
	

// compare member function
/* 0 - when both strings are equal
 >0 - when first string is greater than second
 <0 - when second string is less than first
*/

//	string s1 = "abc";
//	string s2 = "abc";
//	cout<<"Comparision is "<<s1.compare(s2);
//	string s3 = "xbc";
//	cout<<"\nComparision is "<<s1.compare(s3);
//	cout<<"\nCamparision is "<<s3.compare(s1);
//	string s4 = "abcabc";
//	string s5 = "xyzrtca";
//	cout<<"\nComparision is "<<s4.compare(2,2,s5,5,2);
//	
//	//isemptry
//	string s6;
//	cout<<"\nIs string empty "<<s6.empty();


/* Array of string 
There are 3 wayouts in which array of string can be declared */

//const char * str[] = {"abc","xyz","def","rtf"};
//for (int i=0;i<=3;i++){
//	cout<<str[i]<<" ";
//	}
//char str1[4][10] = {"abc", "xyz", "def","rtf"};
//	for (int i=0;i<=3;i++){
//		cout<<str1[i]<<" ";
//		cout<<"\n";
//}
//string s2[] = {"abc","xyz","def","rtf"};
//for (int i=0;i<=3;i++){
//	cout<<s2[i]<<" ";
//}


/* Constructors
A constructor is a member function of a class having same name as that of class which can be used to initialize the data members of a class.
Its automatically called when we create the object of a class
Constructor do not have any return type not even void */
// Default constructor : constructor without any parameters

//} 


//class rectangle {
//	int l,b;
//	public:
//		rectangle() {
//			l=12;
//			b=34;
//		}
//		int area(){
//			return (l*b);
//		}
//};
//
//int main(){
//	rectangle r;
//	cout<<"Area is "<<r.area();
//}

// Program to calculate area of circle by using constructor
//class circle{
//	int pi=3.14,r;
//	public:
//		circle(){
//			r=5.5f;
//		}
//		float area(){
//			return (3.14*r*r);
//		}
//};
//
//int main(){
//	circle c;
//	cout<<"Area of circle is "<<c.area();
//}

//class student {
//	int roll_no;
//	string name;
//	float marks;
//	public:
//		student(int r,string n, float m){
//			roll_no=r;
//			name=n;
//			marks=m;
//		}
//		void show(){
//			cout<<roll_no<<" "<<name<<" "<<marks<<"\n";
//		}
//};
//
//int main(){
//	student s1(1,"Rohan Kumar",56);
//	student s2(2,"Rohit Kumar",64);
//	s1.show();
//	s2.show();
//}

/* Program to print the details of 4 employees by using parameterized constructor and take emp_id, name and salary as data members */

//class employee {
//	int emp_id;
//	string name;
//	float salary;
//	public:
//		employee(int emp, string n, float s){
//			emp_id=emp;
//			name = n;
//			salary = s;
//		}
//		void show(){
//			cout<<emp_id<<" "<<name<<" "<<salary<<endl;
//		}
//};
//
//int main(){
//	employee e1(14, "Rohan Kumar", 5458.4f);
//	employee e2(15, "Akash Kumar", 5656.5f);
//	employee e3(16, "Arjit Kumar", 8665.4f);
//	employee e4(18, "Atul Agnihotri",51545.4f);
//	
//	e1.show();
//	e2.show();
//	e3.show();
//	e4.show();
//}


// Program to calculate area of triangle by initializing base and height using paramterized constructor and calculate area by taking a friend function
//#include<iostream>
//using namespace std;
//class calculate {
//	double b,n;
//	public:
//		calculate(double b, double n){
//			this -> b =b;
//			this -> n = n;
//		}
//		friend double calculate_area(calculate ob);
//};
//double calculate_area(calculate ob){
//	return (0.5*ob.b*ob.n);
//}
//int main(){
//	calculate ob(5.5,10.5);
//	cout<<"Area of triangle is "<<calculate_area(ob);
//}

// Program to find Largest element in an array of 'n' elements by using a friend function
//#include <iostream>
//using namespace std;
//class largest{
//	int *arr;
//	public: 
//		largest(){
//			int i,n;
//			cout<<"Enter the number of elements\n";
//			cin>>n;
//			arr = new int[n];
//			cout<<"Enter "<<n<<" elements\n";
//			for(int i=0;i<=n-1;i++){
//				cin>>arr[i];
//			}
//			friend int calculate_largest(largest ob);
//		}
//};
//int calculate_largest(largest ob){
//	int l,i;
//	l=ob.arr[0];
//	for (int i=1;i<=ob.n-1;i++){
//		if(ob.arr[i]>1)
//		l=ob.arr[i];
//	}
//	return 0;
//}
//int main(){
//	largest ob;
//	cout<<"Largest element is "<<calculate_largest(ob);
//}

/* Program to create a class book with book_id, name, price, pages.
initialize the data members by using paramiterized constructor and print the details by using friend function */

//#include <iostream>
//using namespace std;
//
//class book{
//    string b_name;
//    int b_id, pages;
//    double b_price;
//    
//public:
//    book(int b_id, string b_name, int pages, double b_price){
//        this->b_id = b_id;
//        this->b_name = b_name;
//        this->pages = pages;
//        this->b_price = b_price;
//    }
//    
//    friend void show(book b); // This declaration should be inside the class.
//};
//
//void show(book b){
//    cout << b.b_id << " " << b.b_name << " " << b.pages << " " << b.b_price << endl;
//}
//
//int main(){
//    book b(1, "abc", 25, 250);
//    show(b);
//    return 0; // You should return an integer value from main.
//}

// Constructor with default parameters
#include<iostream>
using namespace std;
class rectangle {
	double l,b;
	public: 
	rectangle (double l=10;double b=12){
		this->l=l;
		this->b=b;
	}
	double area(){
		return (l*b);
	}
};

int main(){
	rectangle r;
	cout<<"Area is "<<r.area();
	rectangle r1(12.5);
	cout<<"\nArea is "<<r1.area();
	rectangle r2(5.5,10.5);
	cout<<"\nArea is "<<r2.area();
}
