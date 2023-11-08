#include <iostream>
using namespace std;

// int main()
// {
//     int arr[5];
//     // arr[0] = 7;
//     // arr[1] = 10;
//     // arr[2] = 0;
//     // arr[3] = 20;
//     // arr[4] = 30;

//     // taking input through loop
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
// // printing values of array using loop
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     // putting values is req is size of not declared
//     int arr[] = {50, 10, 15, 63, 8};
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[i]); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// memory allocation in array is continous
// int main()
// {
//     int arr[] = {1, 2, 3, 4};
//     cout << &arr[0] << endl;
//     cout << &arr[1] << endl;
//     cout << &arr[2] << endl;
//     cout << &arr[3] << endl; // this shows that address is continous
// }

// Calculate sum of all elements of arrays

// int main()
// {
//     int arr[] = {7, 10, 4, 5, 23, 65, 98, 18};
//     int size = sizeof(arr) / sizeof(arr[1]);
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + arr[i];
//     }

//     cout << "Sum is " << sum << endl;
// }

// Linear serach

// int main()
// {
//     int arr[] = {1, 7, 6, 9, 56, 43, 87};
//     int size = sizeof(arr) / sizeof(arr[1]);
//     int x;
//     cout << "Enter target : ";
//     cin >> x;
//     bool flag = false;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == x)
//         {
//             flag = true;
//             break;
//         }
//     }

//     if (flag)
//     {
//         cout << x << " is present";
//     }
//     else
//     {
//         cout << x << " is not present";
//     }
// }

// Find the maxium value out of all the elements in arrays

// int main()
// {
//     int arr[] = {12, 3, 45, 6, 87, 56, 125, 98};
//     int size = sizeof(arr) / sizeof(arr[1]);
//     int max = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     cout << "Max value is " << max << endl;
// }

// for
//     minimum value
#include <limits.h>
int main()
{
    int arr[] = {12, 3, 54, 67, 2, 46, 69, 87, 56};
    int size = sizeof(arr) / sizeof(arr[1]);
    int mn = INT_MAX; // we can also use INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mn = min(mn, arr[i]);
    }

    cout << "Min value is " << mn << endl;
}

// Find the second largest element
#include <limits.h>
int main()
{
}