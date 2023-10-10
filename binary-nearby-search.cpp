// #include <iostream>
// using namespace std;
// int findSqrt(int n)
// {
//     int s = 0;
//     int target = n;
//     int e = n;
//     int mid = s + (e - s) / 2;
//     int ans = -1;

//     while (s <= e)
//     {
//         if (mid * mid == target)
//         {
//             return mid;
//         }
//         if (mid * mid > target)
//         {
//             // left search
//             e = mid - 1;
//         }
//         else
//         {
//             // ans store
//             ans = mid;

//             // right search
//             s = mid + 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number " << endl;
//     cin >> n;

//     int ans = findSqrt(n);
//     cout << "Ans is " << ans << endl;

//     return 0;
// }

// Binary search for nearly sorted arrays
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
            return mid;
        if (mid - 1 >= s && arr[mid - 1] == target)
            return mid - 1;
        if (mid + 1 < e && arr[mid + 1] == target)
            return mid + 1;

        if (target > arr[mid])
        {
            // right search
            s = mid + 2;
        }
        else
        {
            // left search
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 40;

    int ans = binarySearch(arr, target);
    cout << "index of " << target << " is " << ans << endl;

    return 0;
}
