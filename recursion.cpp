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

// #include <iostream>
// #include <string>
// using namespace std;
// bool isPalindrome(string str, int start, int end)
// {
//     if (start >= end)
//         return true;
//     if (str[start] != str[end])
//         return false;
//     return isPalindrome(str, start + 1, end - 1);
// }

// int main()
// {
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;
//     if (isPalindrome(input, 0, input.length() - 1))
//         cout << input << " is a pelindrome. " << endl;
//     else
//         cout << input << " is not a pelindrome." << endl;
//     return 0;
// }

// Take input from user and count the number of entered number
// #include <iostream>
// using namespace std;
// int countNum(int n)
// {
//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         ++count;
//     }
//     return count;
// }

// int main()
// {
//     cout << "Enter the number: ";
//     int n;
//     cin >> n;
//     cout << "No of digits: " << countNum(n);
// }

// #include <iostream>
// #include <cstring>
// #include <string>
// using namespace std;
// int main()
// {
//     string str{"Steve jobs"};
//     char *cstr = new char[str.length() + 1];
//     strcpy(cstr, str.c_str());
//     char *p = strtok(cstr, " ");
//     while (p != 0)
//     {
//         cout << p << "\n";
//         p = strtok(NULL, " ");
//     }
//     delete[] cstr;
//     return 0;
// }

// Day 2 of Resursion
// #include <iostream>
// using namespace std;

// void print(int arr[], int n, int i)
// {
//     // base case
//     if (i >= n)
//     {
//         return;
//     }

//     // 1 case solved
//     cout << arr[i] << " ";

//     print(arr, n, i + 1);
// }

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int n = 5;
//     int i = 0;

//     print(arr, n, i);
// }

// Find maximum value using recursion method
// #include <iostream>
// #include <limits.h>
// using namespace std;
// void findMax(int arr[], int n, int i, int &maxi)
// {
//     // base case
//     if (i >= n)
//     {
//         return;
//     }
//     // checking current element for max
//     if (arr[i] > maxi)
//     {
//         maxi = arr[i];
//     }

//     // left all recursion will do
//     findMax(arr, n, i + 1, maxi);
// }

// int main()
// {
//     int arr[] = {10, 30, 21, 54, 18, 17, 66, 92};
//     int n = 8;

//     int maxi = INT_MIN;

//     int i = 0;

//     findMax(arr, n, i, maxi);
//     cout << "Maximum number is: " << maxi << endl;
// }

// Character is available in the array or not
<<<<<<< HEAD
// #include <iostream>
// using namespace std;

// bool checkKey(string str, int i, int n, char key)
// {
//     // base case
//     if (i >= n)
//     {
//         return false;
//     }
//     // we'll solve one case
//     if (str[i] == key)
//     {
//         return true;
//     }

//     // baki sab recursion sambhal lega
//     return checkKey(str, i + 1, n, key);
// }

// int main()
// {
//     string str = "ArshadNoor";
//     int n = str.length();

//     char key = 'r';

//     int i = 0;
//     bool ans = checkKey(str, i, n, key);
//     cout << "Answer is: " << ans << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void combinationSum(vector<int> &candidates, int target, int index, vector<int> &current, vector<vector<int>> &result)
{
    if (target == 0)
    {
        result.push_back(current);
        return;
    }
    if (target < 0 || index == candidates.size())
    {
        return;
    }
    // Include the current element
    current.push_back(candidates[index]);
    combinationSum(candidates, target - candidates[index], index, current, result);
    current.pop_back();
    // Exclude the current element
    combinationSum(candidates, target, index + 1, current, result);
}

vector<vector<int>> findCombinations(vector<int> &candidates, int target)
{
    vector<vector<int>> result;
    vector<int> current;
    combinationSum(candidates, target, 0, current, result);
    return result;
=======
#include <iostream>
using namespace std;

bool checkKey(string str, int i, int n, char key)
{
    // base case
    if (i >= n)
    {
        return false;
    }
    // we'll solve one case
    if (str[i] == key)
    {
        return true;
    }

    // baki sab recursion sambhal lega
    return checkKey(str, i + 1, n, key);
>>>>>>> ecc0be87317dca7f9e67660e0189bd98d3bcf806
}

int main()
{
<<<<<<< HEAD
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> candidates(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> candidates[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;
    vector<vector<int>> combinations = findCombinations(candidates, target);
    cout << "Combinations that sum to " << target << ":" << endl;
    for (const vector<int> &combo : combinations)
    {
        cout << "[";
        for (int num : combo)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
=======
    string str = "ArshadNoor";
    int n = str.length();

    char key = 'r';

    int i = 0;
    bool ans = checkKey(str, i, n, key);
    cout << "Answer is: " << ans << endl;

>>>>>>> ecc0be87317dca7f9e67660e0189bd98d3bcf806
    return 0;
}
