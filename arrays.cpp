// Arrays :  To store same data type elements, rather than storing it by defining multiple variable, we simply use arrays for this..

// Day 1: We will start from the basic of arrays

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[53];                    //  array  declaration of 53 size
//     int b[] = {4, 5, 6, 3, 2, 9}; // here giving values is mendatory, though we don't declared the size of the array.
//     cout << b[0];  // output 4  (0th index)
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // taking multiple inputs from user one by one and printing it one by one

//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         // for taking the input
//         cout << "Enter " << i + 1 << " number value: \n";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         // for printing the values from arrays
//         cout << i + 1 << ". " << arr[i] << endl;
//     }

//     return 0;
// }

// Point to remember : If we declare 10 size of array and we put let say only 3 values and then in place of other 7 declared location by default 0 will store
// Let's see it practically

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10];
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Enter 3 numbers: \n";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// Most Important :  While create a function of array we've to pass the size of array too.
// And if any change made in function of array it change in main array too. It doesn't create a carbon copy of an array

// ----------------------- Linear search in array ----------------------  //
//  In linear search we retrive all the elements of array extact one by one

// #include <iostream>
// using namespace std;

// bool find(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//     }
//     // return when not found
//     return false;
// }
// int main()
// {
//     int arr[5] = {1, 3, 5, 7, 8};
//     int size = 5;

//     cout << "Enter what you want to find? \n";
//     int key;
//     cin >> key;

//     if (find(arr, size, key))
//     {
//         cout << "Found\n";
//     }
//     else
//     {
//         cout << "Not found!\n";
//     }
// }

// Linear search using another method
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "How many numbers you want to enter: \n";
//     int lim;
//     cin >> lim;
//     int arr[lim];
//     // for storing the numbers in array
//     for (int i = 0; i < lim; i++)
//     {
//         cout << "Enter the numbers one by one\n";
//         cin >> arr[i];
//     }
//     // Now, searching portion
//     int key;
//     cout << "What you want to search? \n";
//     cin >> key;

//     bool flag = 0;
//     // flag 0 -> item not found
//     // flag 1 -> item found

//     // loop for search key in array
//     for (int i = 0; i < lim; i++)
//     {
//         if (arr[i] == key)
//         {
//             flag = 1;
//             break; // if item found stop the loop
//         }
//     }
//     if (flag)
//         cout << "Item found!";
//     else
//         cout << "Item not found!";
// }

// Finding number of zeros and ones in the array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10] = {1, 2, 3, 0, 1, 0, 1, 0, 9, 1};
//     int size = 10;
//     int numZero = 0;
//     int numOne = 0;

//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] == 0)
//         {
//             numZero = numZero + 1;
//         }
//         if (arr[i] == 1)
//         {
//             numOne = numOne + 1;
//         }
//     }

//     cout << "Number of zeros are " << numZero << endl;
//     cout << "Number of ones are " << numOne << endl;

//     return 0;
// }

// Finding the maximum number in array
// Note: Best practice when we find any max number in array we start with INT_MIN
// And same as start with INT_MAX when we search for max num in array

// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main()
// {
//     int max = INT_MIN;

//     cout << "How many numbers you want to enter? \n";
//     int lim;
//     cin >> lim;
//     cout << "Enter the numbers one by one: \n";
//     int arr[lim];
//     for (int i = 0; i < lim; i++)
//     {
//         cin >> arr[i];
//     }
//     // for finding the max number
//     for (int i = 0; i < lim; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout << "Maximum number is " << max << endl;

//     return 0;
// }

// ('^')