// Getting started with recursion
// In this a function call itself unlimited times

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     // base case
//     if (n == 1)
//         return 1;

//     cout << "Function is called for n: " << n << endl;
//     int ans = n * factorial(n - 1);
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;

//     int ans = factorial(n);
//     cout << "Answer is: " << ans << endl;
// }

// #include <iostream>
// using namespace std;

// void printCounting(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return;
//     }

//     // processing
//     cout << n << " ";

//     // recursive relation
//     printCounting(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n " << endl;

//     cin >> n;

//     printCounting(n);
//     cout << endl;
// }

// Factorial of a Number
// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     // Base case : factorial of 0 is 1
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: \n";
//     cin >> num;

//     if (num < 0)
//     {
//         cout << "Factorial is not defined for negative number. ";
//     }
//     else
//     {
//         cout << "Factorial of " << num << " is " << factorial(num);
//     }
//     return 0;
// }

// Fibonacci Series

// #include <iostream>
// using namespace std;

// int fibonacci(int n)
// {
//     if (n <= 1)
//         return n;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main()
// {
//     int num;
//     cout << "Enter the value of n: ";
//     cin >> num;
//     cout << "Fibonacci(" << num << ") = " << fibonacci(num) << endl;
//     return 0;
// }

// Sum of Natural Numbers
// #include <iostream>
// using namespace std;
// int sum(int n)
// {
//     // base case
//     if (n == 1)
//         return 1;
//     else
//         return n + sum(n - 1);
// }

// int main()
// {
//     int num;
//     cout << "Entera positive integer: ";
//     cin >> num;
//     cout << "Sum of natural numbers from 1 to " << num << " is " << sum(num) << endl;
// }

// Power Calculation
// #include <iostream>
// using namespace std;
// double power(double x, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else if (n > 0)
//     {
//         return x * power(x, n - 1);
//     }
//     else
//     {
//         return (1 / x) * power(x, n + 1);
//     }
// }

// int main()
// {
//     double base;
//     int exponent;
//     cout << "Enter the base: ";
//     cin >> base;
//     cout << "\nEnter the exponent: \n";
//     cin >> exponent;
//     cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
// }

// Finding GCD (Greatest Common Divisor) using recursion method
// #include <iostream>
// using namespace std;
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "GCD(" << num1 << ", " << num2 << ") = " << gcd(num1, num2);
// }

// Palindrome Check using recursion method

#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str, int start, int end)
{
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (isPalindrome(input, 0, input.length() - 1))
        cout << input << " is a pelindrome. " << endl;
    else
        cout << input << " is not a pelindrome." << endl;
    return 0;
}
