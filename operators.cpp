// Operators

// When we do right shifting : it divide by 2 by n times
// left shifting : It multiply by 2 by n times

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 12;
//     a = a >> 2;  // it will divide two times by 2  : 12/2 = 6 / 2 = 3
//     cout<<a<<endl; // output 3

//    // left shift operation
//     int b = 12;
//     b = b << 2;  // here it will multiply two times by 2 : 12x2 = 24 x 2 = 48
//     cout<<b<<endl;  // output 48
// }

// Pre increament and post increament

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     cout<<++a<<endl; // here it will print 6 becoz we used pre incerament

//     int b = 10;
//     cout<<b++<<endl; // here it will print 10 becoz we used post inceament
//     cout<<b; // now it will print 11
// }

// Switch case

// Write  a program for calculator by using switch cases

// #include <iostream>
// using namespace std;
// int main(){
//     int a, b;
//     cout<<"Enter two numbers: \n";
//     cin>>a>>b;
//     cout<<"Select operation to perform:\n";
//     cout<<"1. Add\n2. Sub\n3. Mul\n4. Div\n";
//     int opr;
//     cin>>opr;

//     // switch cases to perform operation
//     switch (opr) {
//         case 1: cout<<a+b;
//         break;  // if we do not use break keyword then it will print all below values too but I have to show only selected value by user
//         case 2: cout<<a-b;
//         break;
//         case 3: cout<<a*b;
//         break;
//         case 4: cout<<a/b;
//         break;
//         default: cout<<"You entered invalid operator";  // here break is not mendatory
//     }
//     return 0;
// }

// Now Let's move towards Functions
// #include<iostream>
// using namespace std;
// void printName(){
//     cout<<"Enter your name: \n";
//     string abc;
//     cin>>abc;
//     cout<<"How much times you want to print it: \n";
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cout<<abc<<endl;
//     }
// }

// int main(){
//     printName();  // function call
// //Note: We can call function multiple time to execute it multiple time when needed.
// }

// Program to find greatest of three numbers
// #include <iostream>
// using namespace std;
// int findMax(int num1, int num2, int num3){
//     if (num1 > num2 && num1 > num3) {
//         return num1;
//     } else if (num2 > num1 && num2 > num3) {
//         return num2;
//     } else {
//         return num3;
//     }
// }

// int main(){
//    //  cout<<findMax(12,43,24);
//     // we can also take input from user and call funtion, let's do -

//     cout<<"Enter three numbers to find max: \n";
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     cout<<"Max of all three is : "<<findMax(n1,n2,n3);
// }

// Note: We use void function when we have to print the result
// And we use int or other data type function when we have to return the that data type from a function

// Printing grades by taking result from user
// #include <iostream>
// using namespace std;
// char getGrade(int marks){  // here char will return character type data
//     if (marks>=90)
//     return 'A';
//     else if (marks >= 80)
//     return 'B';
//     else if (marks >= 70)
//     return 'C';
//     else if (marks >= 60)
//     return 'D';
//     else
//     return 'F';
// }

// int main(){
//     cout<<"Enter total obtained marks: \n";
//     int marks;
//     cin>>marks;
//     cout<<"Your grade is : "<<getGrade(marks);
//     cout<<endl;
// }

// Now lets make grade calculating system by using switch cases

// char getGrade(int marks){
//     switch (marks/10){
//         case 9: return 'A';
//         break;
//         case 8: return 'B';
//         break;
//         case 7: return 'C';
//         break;
//         case 6: return 'D';
//         break;
//         default: return 'F';
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter you score: \n";
//     int marks;
//     cin>>marks;
//     cout<<"Your grade is: "<<getGrade(marks);
//     return 0;
// }

// Working perfectly

// Happy programming (`~`)

// Sum of all even numbers upto n
// #include <iostream>
// using namespace std;
// int getSum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     return sum;
// }

// int main()
// {
//     cout << "Enter value of n: \n";
//     int n;
//     cin >> n;
//     cout << "Sum of all even numbers upto " << n << " is " << getSum(n);
// }

// checking a number is prime or not
//  conditions for prime number : divided by 1 and itself

// #include <iostream>
// using namespace std;
// string isPrime(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return "Not prime";
//     }

//     for (int i = 2; i < n / 2; i++)
//     {
//         if (i % n == 0)
//         {
//             return "Not prime";
//             break;
//         }
//         else
//         {
//             return "Prime number";
//         }
//     }
// }

// int main()
// {
//     cout << "Enter a number: ";
//     int n;
//     cin >> n;
//     cout << isPrime(n);
// }

// find factorial of a number
// #include <iostream>
// using namespace std;
// int factorial(long long int n)
// {
//     long long int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main()
// {
//     cout << "Enter a number: ";
//     long long int n;
//     cin >> n;
//     cout << "Factorial is " << factorial(n);
// }

// checking number is a prime no or not

// #include <iostream>
// using namespace std;
// bool checkPrime(int n)
// {
//     for (int i = 2; i < n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     bool isPrime = checkPrime(n);
//     if (isPrime)
//     {
//         cout << "Prime number\n";
//     }
//     else
//     {
//         cout << "Not a prime number\n";
//     }
// }

// #include <iostream>
// using namespace std;
// bool checkPrime(int n)
// {
//     for (int i = 2; i < n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cout << "Enter a number: \n";
//     cin >> n;

//     for (int i = 2; i <= n; i++)
//     {
//         bool isPrime = checkPrime(i);
//         if (isPrime)
//         {
//             cout << i << " ";
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter value of n: \n";
//     cin >> n;
//     for (int i=2;i<=n;i++){
//         if (i)
//     }
// }

// reverse an integer
