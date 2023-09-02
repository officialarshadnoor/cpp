// Vector
// Vector double their size dynamically when its full

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr;
//     cout << arr.size() << endl;     // stored verctors
//     cout << arr.capacity() << endl; // this will print how much elements can we store
// // to add element we use push_back()
//     arr.push_back(5);
//     arr.push_back(6);

//     // print
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

// // to remove last element we use pop_back()
//     arr.pop_back();
//     return 0;
// }

// Finding unique element in vector
//  > For this we use xor operator
// XOR operator gives 0 in case of same element

// #include <iostream>
// #include <vector>
// using namespace std;

// int findUnique(vector<int> arr)
// {
//     int ans = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans = ans ^ arr[i]; // here we used xor operator to find unique element
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of array\n";
//     cin >> n;
//     vector<int> arr(n);

//     cout << "Enter the elements: \n";
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cin >> arr[i];
//     }
//     int uniqueElement = findUnique(arr);
//     cout << "Unique element is " << uniqueElement << endl;
// }

// Union of array : merging two array elements
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {

//     int arr[] = {1, 3, 5, 7, 9};
//     int sizea = 5;
//     int brr[] = {2, 4, 6, 8};
//     int sizeb = 4;

//     vector<int> ans;

//     // push all elements of vector arr
//     for (int i = 0; i < sizea; i++)
//     {
//         ans.push_back(arr[i]);
//     }

//     // push all elements of vector brr
//     for (int i = 0; i < sizeb; i++)
//     {
//         ans.push_back(brr[i]);
//     }

//     // print ans
//     cout << "Printing ans array \n";
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// int main()
// {
//     int a = 3 ^ 3 ^ 4; // xor prints only unique value. Here it will ignore 3 becoz it have pair and it will print 4
//     cout << a;
// }

// Intersecction of two arrays

// int main()
// {
//     vector<int> arr{5, 8, 10, 11, 14, 16, 18};
//     vector<int> brr{3, 5, 49, 10};

//     vector<int> ans;

//     // outer loop on arr vector
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < brr.size(); j++)
//         {
//             if (arr[i] == brr[j])
//             {
//                 brr[j] = -1;
//                 ans.push_back(arr[i]);
//             }
//         }
//     }
//     // print ans
//     for (auto value : ans)
//     {
//         cout << value << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Pair sum
// Find a pair that upon addition gives value equal to sum
// int main()
// {
//     vector<int> arr{1, 3, 5, 7, 2, 4, 6};
//     // print all pairs
//     // outer loop will traverse for each element
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int element = arr[i];

//         // for every element, will traverse on aage wale elements
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             // first print all the pair just to check
//             // cout << "(" << element << ", " << arr[j] << ")" << endl;
//             if (element + arr[j] == 9)
//             {
//                 // now it will print all the pair whose sum is equal to 9
//                 cout << element << " " << arr[j] << endl;
//             }
//         }
//     }
// }

// Now lets level up and try same logic to find triplet sum
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{2, 3, 4, 9, 6, 15, 7, 98, 12, 13, 19};

    // we have to run triplet nested loop
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                // now try to print all possible triple pairs of given numbers
                // cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;

                // now if pair sum is equal to 15 then print
                if (arr[i] + arr[j] + arr[k] == 15)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

// Working perfectly  :)