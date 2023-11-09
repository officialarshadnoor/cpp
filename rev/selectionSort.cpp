// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main()
// {
//     int arr[] = {5, 3, 1, 4, 2};
//     int n = 5;

//     // printing
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     // selection sorting start
//     // for (int i = 0; i < n - 1; i++)
//     // {
//     //     int min = INT_MAX;
//     //     int mindx = -1;
//     //     for (int j = i; j < n; j++)
//     //     {
//     //         if (arr[j] < min)
//     //         {
//     //             min = arr[j];
//     //             mindx = j;
//     //         }
//     //     }
//     //     swap(arr[i], arr[mindx]);
//     // }

//     // writing selection sort algo again
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = INT_MAX;
//         int mindx = -1;
//         for (int j = i; i < n; j++)
//         {
//             if (arr[j] < min)
//             {
//                 min = arr[j];
//                 mindx = j;
//             }
//         }
//         swap(arr[i], arr[mindx]);
//     }

//     // printing new sorted array
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// insertion sorting

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[6] = {8, 6, 37, 5, 24, 67};
//     int n = 6;

//     // printing first
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     // insertion sort

//     for (int i = 1; i < n; i++)
//     {
//         int j = i;
//         // while (j >= 1)
//         // {
//         //     if (arr[j] >= arr[j - 1])
//         //         break;
//         //     else
//         //         swap(arr[j], arr[j - 1]);
//         //     j--;
//         // }

//         // another logic
//         while (j >= 1 && arr[j] < arr[j - 1])
//         {
//             swap(arr[j], arr[j - 1]);
//             j--;
//         }
//     }

//     // printing sorted
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
