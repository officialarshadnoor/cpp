// Arrays
// Printing row wise arrays

#include <iostream>
using namespace std;
// int main()
// {
//     // declare 2D array
//     int arr[3][3];

//     // initiallisation
//     int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     // row-wise print
//     // outer loop
//     for (int i = 0; i < 3; i++)
//     {
//         // for every row, we need to print value in each column
//         for (int j = 0; j < 3; j++)
//         {
//             cout << brr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// now printing column wise
// int main()
// {
//     // declare 2D array
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     // outer loop
//     for (int i = 0; i < 3; i++)
//     {
//         // for column wise printing
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// Taking row wise input and printing row wise output
// int main()
// {
//     int arr[4][3];
//     cout << "Enter value for input" << endl;

//     // taking row-wise input from user
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // printing row wise input from user
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Taking input column-wise and printing output column wise
// int main()
// {
//     int arr[4][3];
//     cout << "Enter value for input" << endl;
//     // taking col-wise input from user
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[j][i];
//         }
//     }

//     // for printing the output
//     // when we take column wise input then we have to print it normal
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Printing row wise sum of all elements
// int main()
// {
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;
//     cout << "Enter values: ";
//     // row wise input
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "\nPrinting row-wise\n";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "\nPrinting sum of rows\n";
//     // now printing the sum of rows
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }

// Printing column wise sum of all elements
// int main()
// {
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;
//     cout << "Enter values: ";
//     // col wise input
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "\nPrinting col-wise\n";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "\nPrinting sum of cols\n";
//     // now printing the sum of cols
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum = sum + arr[j][i];
//         }
//         cout << sum << endl;
//     }
// }

// Printing the maximum elements in the array
// For this we use INT_MIN and have to include <limits.h> library

// #include <limits.h>

// int getMax(int arr[][3], int rows, int cols)
// {
//     int maxi = INT_MIN;
//     // outer loop
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (arr[i][j] > maxi)
//             {
//                 maxi = arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }
// int main()
// {
//     int arr[3][3] = {{15, 20, 5}, {5, 8, 12}, {18, 20, 21}};
//     int rows = 3;
//     int cols = 3;

//     cout << "Max elements is : " << getMax(arr, rows, cols);
// }

// Transpose of the matrix
// Rows will become columns
// and columns will become rows

// int main()
// {
//     int arr[3][3] = {{15, 20, 5}, {5, 8, 12}, {18, 20, 21}};
//     int trans[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             swap(arr[i][j], trans[j][i]);
//         }
//     }
//     // printing output
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << trans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// --------------- Sorting ----------------- //

// void moveAllNegToLeft(int *a, int n)
// {
//     // Dutch National Flag Algo
//     int l = 0, h = n - 1;
//     while (l < h)
//     {
//         if (a[l] < 0)
//         {
//             l++;
//         }

//         else if (a[h] > 0)
//         {
//             h--;
//         }
//         else
//         {
//             swap(a[l], a[h]);
//         }
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[] = {1, 2, -3, 4, -5, 6};
//     int n = sizeof(a) / sizeof(int);

//     // move all -ve to left
//     moveAllNegToLeft(a, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// ------------- Binary Search ------------//
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int size, int target)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         int element = arr[mid];
//         if (element == target)
//         {
//             return mid;
//         }
//         else if (target < element)
//         {
//             // search in left
//             end = mid - 1;
//         }
//         else
//         {
//             // search in right
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     // if it exit from loop without returning anything it means element is not found
//     // if element is not found then we return -1
//     return -1;
// }
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10, 12, 16};
//     int size = 7;
//     int target = 2;

//     int indexOftarget = binarySearch(arr, size, target);

//     if (indexOftarget == -1)
//     {
//         cout << "target not found" << endl;
//     }
//     else
//     {
//         cout << "target found at " << indexOftarget << endl;
//     }
//     return 0;
// }

// --------- First Occurance -------------//

#include <iostream>
#include <vector>
using namespace std;
int firstOcc(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // left search
            e = mid - 1;
        }
        else if (target < arr[mid])
        {
            // left me search
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> v{1, 3, 4, 4, 4, 4, 4, 6, 7};
    int target = 4;

    int ans = firstOcc(v, target);

    cout << "First occurance is at " << ans << endl;
    return 0;
}
