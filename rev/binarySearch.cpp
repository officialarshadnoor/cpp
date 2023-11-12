// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr;
//     arr = {3, 6, 8, 13, 21, 45, 67, 89, 94, 96};

//     int low = 0;
//     int high = arr.size() - 1;
//     int target = 89;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target)
//         {
//             cout << "Value is available";
//         }
//         else if (arr[mid] < target)
//         {
//             low = arr[mid] + 1;
//         }
//         else
//         {
//             high = arr[mid] - 1;
//         }
//     }

//     return 0;
// }

//
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
//     int n = 9;
//     int x = 12;

//     int lo = 0;
//     int hi = n - 1;
//     bool flag = false;
//     while (lo <= hi)
//     {
//         int mid = lo + (hi - lo) / 2;
//         if (arr[mid] == x)
//         {
//             flag = true;
//             cout << arr[mid - 1];
//             break;
//         }
//         else if (arr[mid] < x)
//             lo = mid;
//         else
//             hi = mid - 1;
//     }
//     if (flag == false)
//         cout << arr[lo];
// }

// first occurance
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 9};
    int size = sizeof(arr) / sizeof(arr[1]);
    int x = 3;

    int lo = 0;
    int hi = size - 1;

    bool flag = false;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid - 1] != x)
            {
                flag = true;
                cout << mid;
                break;
            }
            else
            {
                hi = mid - 1;
            }
        }
        else if (arr[mid] < x)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    if (flag = false)
        cout << -1;
}